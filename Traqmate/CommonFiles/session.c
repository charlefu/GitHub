// don't compile in sensorunit complete
#if !defined (DISPLAYATTACHED)
// Part of traqmate.c
// 4/12/2004
// Author: GAStephens
//
// These functions update the index page (page 0) in the DataFlash
// These functions are not portable. They depend on 8052 byte ordering MSB..LSB.
//
#include <ctype.h>
#include <tmtypes.h>
#ifdef DISPLAY
#include <display.h>
#else
#include <sensor.h>
#endif

//
// This function is used to initialize the session pointers.
// OPTIMIZE: could combine with code in Start_Session
// Pass in pointers to locations to store segment numbers
//
void Init_Session(u16 * startpage, u16 *iopage) {
	xdata u08 i;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	*startpage = FIRSTDATAPAGE-1;  // will get incremented later
	*iopage = IOPAGESTART+1;	 // will get decremented later

	// find the last available segment and lowest ending io segment
	// session available when session starting segment = 0xFFFF
	for (i = 0; i < NUMSESSIONS; i++) {
		// if starting segment not programmed, that segment index is available
		if (0xFFFF != flashpage.index.session[i].startseg) {
			// starting segment was programmed so note ending segment
			// don't use if ending segment is blank
			if (0xFFFF != flashpage.index.session[i].endseg) {
				*startpage = MAX(flashpage.index.session[i].endseg,*startpage);
				// don't do comparison if no data was ever programmed
				if (0xFFFF != flashpage.index.session[i].ioendseg)
					*iopage = MIN(flashpage.index.session[i].ioendseg,*iopage);
			} // if
		} //  if
	} // for

	++*startpage;			// start data on next page up
	--*iopage;				// start io on previous page
} // Init_Session

//
// This function is used to start a session.
// Pass in pointer to location to store segment number
// returns the starting session number (1-16) or 0 if no segments available
//
u08 Start_Session(u16 * startpage, u16 *iopage) {
	xdata flashpagetype flashpage;		// where to put the index
	xdata u08 driveridx, trackidx, caridx, modesamp;
	xdata u08 startsess, i;

	// initialize the starting and ending date/times
	sessstarttime =
	sessendtime = 0xFFFFFFFF;
	sessstartweeks =
	sessendweeks = 0xFFFF;

	// get the user information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, USERPAGE);
	driveridx = flashpage.user.selecteddriver;
	trackidx = flashpage.user.selectedtrack;
	caridx = flashpage.user.selectedcar;

	modesamp = flashpage.user.modesample & 0x0F;

#ifdef SENSOR		// set elsewhere in DU
	// set up the proper sampling rate
	switch (modesamp) {
		case 2:
			samps_per_sec = 20;
			break;
		case 4:
			samps_per_sec = 40;
			break;
		case 0:
		default:
			samps_per_sec = 10;
	} // switch
#endif

#ifdef DISPLAY	 // SensorUnit must do locally so it can check if TraqData plugged in
	// set up the I/O collection
	iocollect = flashpage.user.iodata;
#endif
	iobyte = MAX_PAGE_SIZE - 1;		// point to MSB
	if (iocollect & 0x80)
		iocollect |= 0x03;

	// clear the io buffer
	DataFlash_Buffer_Clear(IOBUFFER, pagesize);
	// if 16 bit mode selected, turn on all the frequency lines

#ifdef SENSOR
	ADC0_Init();						// init ADC
	UBXInit();							// init Ublox GPS
#endif

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	*startpage = FIRSTDATAPAGE-1;  // will get incremented later
	startsess = 0;
	*iopage = IOPAGESTART+1;	 // will get decremented later

	// find the first available session number, last available segment, and lowest ending io segment
	// session available when session starting segment = 0xFFFF
	for (i = 0; i < NUMSESSIONS; i++) {
		// if starting segment not programmed, that segment index is available
		if (0xFFFF == flashpage.index.session[i].startseg) {
			if (!startsess) startsess = i+1;
		} // if
		// starting segment was programmed so note ending segment
		// don't use ending segment if blank
		else if (0xFFFF != flashpage.index.session[i].endseg) {
			*startpage = MAX(flashpage.index.session[i].endseg,*startpage);
			// don't do comparison if no data was ever programmed
			if (0xFFFF != flashpage.index.session[i].ioendseg)
				*iopage = MIN(flashpage.index.session[i].ioendseg,*iopage);
		} // else if
	} // for

	if (0 == startsess) return (0);				// no sessions available
	if (*startpage >= *iopage) return (0);	// all memory full

	++*startpage;			// start data on next page up
	--*iopage;				// start io on previous page

	// mark the chosen segment as taken
	flashpage.index.session[startsess-1].startseg = MAX(*startpage, FIRSTDATAPAGE);
	// only create data io start address if there are io bits selected
	flashpage.index.session[startsess-1].iostartseg = (iocollect? *iopage : 0xFFFF);
	flashpage.index.session[startsess-1].ioendseg = 0xFFFF;

	// record which i/o points were recorded
	flashpage.index.session[startsess-1].iodata = iocollect;

	// write car, track, and driver
	flashpage.index.session[startsess-1].driver = driveridx;
	flashpage.index.session[startsess-1].car = caridx;
	flashpage.index.session[startsess-1].track = trackidx;

#ifdef DISPLAY
	// upper nibble is mode, lower nibble is sampling rate
	// write the mode
	switch (tm_state) {
		case LAPS:
		case TIMING:
		case WAITSTART:
			flashpage.index.session[startsess-1].modesample = modesamp;
			break;
		case AUTOXGETFINISH:
		case AUTOXSTAGE:
			flashpage.index.session[startsess-1].modesample = 0x14;		// force 40Hz
			break;
		case DRAGSTAGE:
			flashpage.index.session[startsess-1].modesample = 0x24;		// force 40Hz
			break;
		case HILLCLIMBWAITSTART:
		case HILLCLIMB:
			flashpage.index.session[startsess-1].modesample = 0x40 + modesamp;
			break;
		case DRIVE:
		case GPSREC:
			flashpage.index.session[startsess-1].modesample = 0x50 + modesamp;
			break;
		default:
			flashpage.index.session[startsess-1].modesample = modesamp;
			break;
	} // switch

#else
	// write the mode & sampling rate
	flashpage.index.session[startsess-1].modesample = modesamp;
#endif		

	// write the index
	DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	return (startsess);
}

// This function is used to end a session
// Pass in the session number and ending segment number
//
void End_Session(u08 session, u16 endseg, u16 endioseg) {
	xdata flashpagetype flashpage;		// where to put the index

	// make session a better index
	session--;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	// if no valid time data found blow it away
	if (0xFFFFFFFF == sessstarttime) {
		flashpage.index.session[session].starttime =
		flashpage.index.session[session].endtime = 0xFFFFFFFF;
		flashpage.index.session[session].startweeks =
		flashpage.index.session[session].endweeks = 0xFFFF;
		flashpage.index.session[session].startseg =
		flashpage.index.session[session].endseg = 0xFFFF;
	} // if
	else {
		flashpage.index.session[session].starttime = sessstarttime;
		flashpage.index.session[session].startweeks = sessstartweeks;
		flashpage.index.session[session].endtime = sessendtime;
		flashpage.index.session[session].endweeks = sessendweeks;

		// put in the sessions ending segment number
		flashpage.index.session[session].endseg = endseg;

		// put in ending io segment number if data inputs selected and valid starting segment
		if (iocollect && (0xFFFF != flashpage.index.session[session].iostartseg))
			flashpage.index.session[session].ioendseg = endioseg;
		else
			flashpage.index.session[session].iostartseg =
			flashpage.index.session[session].ioendseg = 0xFFFF;

	} // else

	// update the index
	DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);
}

// This function is used to fix all sessions without ending dates due to power loss
// or other circumstance.
//
void Repair_Sessions(void) {
	xdata flashpagetype flashpage;		// where to put the index
	xdata u16 segment;
	xdata u16 session = 0;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	for (session = 0; session<NUMSESSIONS; session++) {
		// look for a starting segment number
		if (0xFFFF != flashpage.index.session[session].startseg) {
			// if invalid start date the segment was not ended correctly so search for data
			if (0xFFFF == flashpage.index.session[session].startweeks) {
				xdata u16 startio, endio;

				segment = flashpage.index.session[session].startseg;
				startio = flashpage.index.session[session].iostartseg;
				endio = flashpage.index.session[session].ioendseg;

				// read first segment to get start date
				DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, segment);
				sessstarttime = flashpage.secsamp10[0].gps.time;
				sessstartweeks = flashpage.secsamp10[0].gps.weeks;				

				// find the last programmed segment
				for (; segment < LASTDATAPAGE; segment++) {
					// read a segment of the session
					DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, segment);
					
					// check for unprogrammed segment
					if (0xFFFFFFFF == *(u32 *) &flashpage) {
						// read previous segment again
						DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, segment-1);

						// find an approximate end time
						sessendtime = flashpage.secsamp10[0].gps.time;
						sessendweeks = flashpage.secsamp10[0].gps.weeks;

						// if invalid io end address, just use start address and toss the data
						if (endio == 0xFFFF) endio = startio;
						// write an end record
						End_Session(session+1, segment-1, endio);
						break;
					} // if
				} // for
			} // if							
			// get the index information back
			DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);
		} // if
	} // for
}

#ifdef PACKMEM
// This function is used to pack all sessions down into memory
//
// *** While relocating of position and io data works, there is a known bug.
// if the highest segment session is not the highest number session, packing works but does not
// free up memory because the highest segment session is not relocated.
//
// key note. the only session that can ever be recorded at FIRSTDATAPAGE is session 1 (index=0)
//
void Pack_Sessions(BOOL report) {
	xdata flashpagetype flashpage;		// where to put the index and data
	xdata u16 firstfree;
	xdata u08 sessiontomove;
	xdata u16 lowestunmovedstart;
	xdata u16 endaddr = iopagecnt;		// highest address moved (for cleanup)
	xdata s08 tempsession;				// temporary session number so global not destroyed

	// ==== Pack the position data
	firstfree = FIRSTDATAPAGE;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

// **** ADDED 3/29/10 to fix a bug where pack would not erase single sessions at top of memory
	// step through the sessions eliminating single page sessions
	for (tempsession = 0; tempsession < NUMSESSIONS; tempsession++) {
		// only process segment if it is programmed
		if (0xFFFF != flashpage.index.session[tempsession].startseg) {
			// if session is only single page long, just eliminate it
			if (flashpage.index.session[tempsession].startseg == flashpage.index.session[tempsession].endseg)
				Erase_Session(tempsession+1);	// session numbers start at 1 in Erase_Session
		} // if
	} // for

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	do {	// keep moving until no more to move
 		// initialize
		lowestunmovedstart = iopagecnt;
		sessiontomove = NUMSESSIONS;

		// step through the sessions looking for the lowest starting 
		for (tempsession = 0; tempsession < NUMSESSIONS; tempsession++) {
	
			// only process segment if it is programmed
			if (0xFFFF != flashpage.index.session[tempsession].startseg) {
				if (firstfree == flashpage.index.session[tempsession].startseg) { 
					firstfree = flashpage.index.session[tempsession].endseg + 1; // point to space after used area
					sessiontomove = NUMSESSIONS;	// reset counters
					lowestunmovedstart = iopagecnt;
					tempsession = -1;					// start at beginning of list again
				} // if
				else if ((flashpage.index.session[tempsession].startseg > firstfree) &&
					(flashpage.index.session[tempsession].startseg < lowestunmovedstart)) {
					// check to see if this is the lowest starting segment that has not been processed
						lowestunmovedstart = flashpage.index.session[tempsession].startseg;
						sessiontomove = tempsession;
				} // if
			} // if
		} // for

		// check to see if we are done
		if (NUMSESSIONS == sessiontomove) {
			if (endaddr != iopagecnt) {
				if (report) {
#ifdef DISPLAY
					Clear_Screen();
					Write_Big_Line(1, "Cleaning", FALSE, '-');
#endif
#ifdef SENSOR
					LO(LED1);
#endif
				} // if
				DataFlash_Erase_Range(firstfree, endaddr, report);	// clean up rest of memory	
			} // if
			break;													// blow this popsicle stand
		} // if
		else {
			xdata u16 segmentcnt;
			xdata u16 startaddr = flashpage.index.session[sessiontomove].startseg;
			xdata u16 savefirst = firstfree;
#ifdef DISPLAY
			xdata u08 tempstring[13];
#endif
			endaddr = flashpage.index.session[sessiontomove].endseg;

#ifdef DISPLAY
			if (report) {
				Clear_Screen();
				sprintf(tempstring, "Packing %u", (u16) sessiontomove+1);
				Write_Big_Line(1, tempstring, FALSE, '-');
			} // if
#endif

			for (segmentcnt = startaddr; segmentcnt <= endaddr;	 segmentcnt++) {
					// read a segment of the session
					DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, segmentcnt);
					// write to new location
					DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, firstfree++);
			} // for

			// fix up indexes to new locations
			DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);	  // get the index information
			flashpage.index.session[sessiontomove].startseg = savefirst;
			flashpage.index.session[sessiontomove].endseg = firstfree-1;

			// update the index
			DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);
		} // else
	} while (1); // while

	// ==== Now pack the io data
	endaddr = pagecnt;
	firstfree = IOPAGESTART;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	do {	// keep moving until no more to move
 		// initialize
		lowestunmovedstart = pagecnt;
		sessiontomove = NUMSESSIONS;

		// step through the sessions looking for the lowest starting 
		for (tempsession = 0; tempsession < NUMSESSIONS; tempsession++) {
	
			// only process segment if it is data and io programmed
			if (0xFFFF != flashpage.index.session[tempsession].startseg &&
				0xFFFF != flashpage.index.session[tempsession].iostartseg) {
				// if there is a session already packed then skip it
				if (firstfree == flashpage.index.session[tempsession].iostartseg) { 
					firstfree = flashpage.index.session[tempsession].ioendseg - 1; // point to space after used area
					sessiontomove = NUMSESSIONS;	// reset counters
					lowestunmovedstart = pagecnt;
					tempsession = -1;					// start at beginning of list again
				} // if
				else if ((flashpage.index.session[tempsession].iostartseg < firstfree) &&
					(flashpage.index.session[tempsession].iostartseg > lowestunmovedstart)) {
					// check to see if this is the lowest starting segment that has not been processed
						lowestunmovedstart = flashpage.index.session[tempsession].iostartseg;
						sessiontomove = tempsession;
				} // if
			} // if
		} // for

		// check to see if we are done
		if (NUMSESSIONS == sessiontomove) {
			if (endaddr != pagecnt) {
#ifdef DISPLAY
				if (report) {
					Clear_Screen();
					Write_Big_Line(1, "IO Cleaning", FALSE, '-');
				} // if
#endif
				DataFlash_Erase_Range(endaddr, firstfree, TRUE);	// clean up rest of memory	
			} // if
			break;													// blow this popsicle stand
		} // if
		else {
			xdata u16 segmentcnt;
			xdata u16 startaddr = flashpage.index.session[sessiontomove].iostartseg;
			xdata u16 savefirst = firstfree;
#ifdef DISPLAY
			xdata u08 tempstring[13];
#endif
			endaddr = flashpage.index.session[sessiontomove].ioendseg;

#ifdef DISPLAY
			if (report) {
				Clear_Screen();
				sprintf(tempstring, "IO Pack %u", (u16) sessiontomove+1);
				Write_Big_Line(1, tempstring, FALSE, '-');
			} // if
#endif

			for (segmentcnt = startaddr; segmentcnt >= endaddr;	 segmentcnt--) {
					// read a segment of the session
					DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, segmentcnt);
					// write to new location
					DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, firstfree--);
			} // for

			// fix up indexes to new locations
			DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);	  // get the index information
			flashpage.index.session[sessiontomove].iostartseg = savefirst;
			flashpage.index.session[sessiontomove].ioendseg = firstfree+1;

			// update the index
			DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);
		} // else
	} while (1); // while
} // Pack_Sessions
#endif

#if 0
// This function returns the number of sessions in use and the amount of memory (in segments).
//
u08 Session_Usage(u16 *memusage) {
	xdata u08 sesscnt = 0;
	xdata u08 i;

	// initialize
	*memusage = 0;

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	for (i = 0; i<NUMSESSIONS; i++) {
		// look for a starting segment number
		if (0xFFFF != flashpage.index.session[i].startseg) {

			sesscnt++;

			*memusage += (flashpage.index.session[i].endseg - flashpage.index.session[i].startseg + 1) +
			(flashpage.index.session[i].iostartseg - flashpage.index.session[i].ioendseg + 1);
		} // if
	} // for
	return(sesscnt);
}
#endif

// This function is used to delete a session
// Pass in the session number. Note Session Numbers start at 1.
//
void Erase_Session(u08 session) {
	xdata flashpagetype flashpage;		// where to put the index

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	// erase the flash pages if valid start and end segments
	if (0xFFFF != flashpage.index.session[session-1].startseg &&
		0xFFFF != flashpage.index.session[session-1].endseg) {

#ifdef SENSOR
		DataFlash_Erase_Range(flashpage.index.session[session-1].startseg,
			flashpage.index.session[session-1].endseg, TRUE);
#endif
#ifdef DISPLAY
		DataFlash_Erase_Range(flashpage.index.session[session-1].startseg,
			flashpage.index.session[session-1].endseg, FALSE);
#endif
	} // if

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	// erase the flash pages if valid io start and end segments
	if (0xFFFF != flashpage.index.session[session-1].iostartseg &&
		0xFFFF != flashpage.index.session[session-1].ioendseg) {

#ifdef SENSOR
		DataFlash_Erase_Range(flashpage.index.session[session-1].ioendseg,
			flashpage.index.session[session-1].iostartseg, TRUE);
#endif
#ifdef DISPLAY
		DataFlash_Erase_Range(flashpage.index.session[session-1].ioendseg,
			flashpage.index.session[session-1].iostartseg, FALSE);
#endif
	} // if

#ifdef DISPLAY
	// erase the laps
	DataFlash_Erase_Page(LASTLAPPAGE - NUMLAPPAGES + session);
#endif

	// get the index information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	flashpage.index.session[session-1].startseg = 
	flashpage.index.session[session-1].endseg =
	flashpage.index.session[session-1].iostartseg = 
	flashpage.index.session[session-1].ioendseg = 0xFFFF;

	flashpage.index.session[session-1].starttime =
	flashpage.index.session[session-1].endtime = 0xFFFFFFFF;

	flashpage.index.session[session-1].startweeks =
	flashpage.index.session[session-1].endweeks = 0xFFFF;

	// initialize
	flashpage.index.session[session-1].modesample =
	flashpage.index.session[session-1].iodata = 0x00;

	// update the index
	DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, INDEXPAGE);

	// pack memory
//	Pack_Sessions(TRUE);
}

// This function sets up default data in driver, car, and track tables
//
void Init_Tables( void ) {
	xdata flashpagetype flashpage;		// where to put the index
	u08 i;
	BOOL writepage = FALSE;

	// get the driver information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, USERPAGE);

	// if page not programmed, fill it up
	if (0xFFFFFFFF == *((u32 *) flashpage.bigbuff)) {

		writepage = TRUE;

		// initialize
		flashpage.user.selecteddriver =
		flashpage.user.selectedtrack =
		flashpage.user.selectedcar = 0x00;
		flashpage.user.iodata = 0x80;			// default to tach enabled

		flashpage.user.modesample = 0x02;		// 20 Hz

		for (i = 0; i < NUMDRIVERS; i++) {
			xdata char name[] = "DriverA";

			name[6] = 'A' + i;
			strcpy(flashpage.user.drivername[i], name);
		} // for

		for (i = 0; i < NUMCARS; i++) {
			xdata char name[] = "CarA";

			name[3] = 'A' + i;
			strcpy(flashpage.user.car[i].name, name);

			flashpage.user.car[i].carspecs.cylandweight = 4;
			flashpage.user.car[i].carspecs.revwarning = 6000;
			flashpage.user.car[i].carspecs.revlimit = 7000;
		} // for
	} // if
	else {
		// make sure indices are valid
		if (flashpage.user.selecteddriver > NUMDRIVERS) {
			flashpage.user.selecteddriver = 0;
			writepage = TRUE;
		}
		if (flashpage.user.selectedtrack > NUMTRACKS) {
			flashpage.user.selectedtrack = 0;
			writepage = TRUE;
		}
		if (flashpage.user.selectedcar > NUMCARS) {
			flashpage.user.selectedcar = 0;
			writepage = TRUE;
		} // if

		// if driver name is unprintable, NULL it out
		for (i = 0; i < NUMDRIVERS; i++) {
			if (!isprint(flashpage.user.drivername[i][0]) && flashpage.user.drivername[i][0] != '\0') {
				flashpage.user.drivername[i][0] = '\0';
				writepage = TRUE;
			} // if
		} // for

		// if car name is unprintable, NULL it out
		for (i = 0; i < NUMCARS; i++) {
			if (!isprint(flashpage.user.car[i].name[0]) && flashpage.user.car[i].name[0] != '\0') {
				flashpage.user.car[i].name[0] = '\0';
				flashpage.user.car[i].carspecs.cylandweight = 4;
				flashpage.user.car[i].carspecs.revwarning = 6000;
				flashpage.user.car[i].carspecs.revlimit = 7000;
				writepage = TRUE;
			} // if
		} // for

	} // else

	if (writepage)
		// write it back out
		DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, USERPAGE);

	// get the track information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, TRACKPAGE);

	writepage = FALSE;

	// if page not programmed, fill it up
	if (0xFF == flashpage.bigbuff[0] && 0xFF == flashpage.bigbuff[1]) {

		writepage = TRUE;

		for (i = 0; i < NUMTRACKS; i++) {
			xdata char name[] = "TrackA";

			name[5] = 'A' + i;
			strcpy(flashpage.circuit.track[i].name, name);

			flashpage.circuit.track[i].startlat =
			flashpage.circuit.track[i].startlon = 0;
			flashpage.circuit.track[i].startalt = 0;
			flashpage.circuit.track[i].starthead = 0;

		} // for
	} // if
	else {
		// if track name is unprintable, NULL it out
		for (i = 0; i < NUMTRACKS; i++) {
			if (!isprint(flashpage.circuit.track[i].name[0]) && flashpage.circuit.track[i].name[0] != '\0') {
				flashpage.circuit.track[i].name[0] = '\0';
				flashpage.circuit.track[i].startlat =
				flashpage.circuit.track[i].startlon = 0;
				flashpage.circuit.track[i].startalt = 0;
				flashpage.circuit.track[i].starthead = 0;

				writepage = TRUE;
			} // if
		} // for
	} // else

	if (writepage)
		// write it back out
		DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, TRACKPAGE);

	writepage = FALSE;

	// get the track finishline information
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, TRACKFINPAGE);

	// if page not programmed, fill it up
	if (0xFF == flashpage.bigbuff[0] && 0xFF == flashpage.bigbuff[1]) {

		writepage = TRUE;

		// set the finish line to zeroes
		for (i = 0; i < NUMTRACKS; i++) {
			flashpage.finishandgear.trackfinish[i].finishlat =
			flashpage.finishandgear.trackfinish[i].finishlon = 0;
			flashpage.finishandgear.trackfinish[i].finishalt = 0;
			flashpage.finishandgear.trackfinish[i].finishhead = 0;
		} // for

		// set the gear ratios and stuff to zeroes
		for (i = 0; i < NUMCARS; i++) {
			int j;

			flashpage.finishandgear.gears[i].diffratio =
			flashpage.finishandgear.gears[i].wheelcircumference = 0;
			for (j = 0; j < NUMGEARS; j++)
				flashpage.finishandgear.gears[i].inchesperenginerev[j] = 0;
		} // for
	} // if		

	if (writepage)
		// write it back out
		DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, TRACKFINPAGE);

	writepage = FALSE;

#ifdef DISPLAY
	// clear out stored sector times
	for (i = 0; i < 4; i++) {			// 4 pages
		int j;
		writepage = FALSE;
	
		// get the track finishline information
		DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, PREDPAGESTART + i);

		for (j=0; j < 4; j++) {		// 4 tracks per page
			// track sectors not programmed, then initialize
			if (0xFFFFFFFF == flashpage.storedsectors[j].bestsectortimes[0]) {
				int k;
	
				writepage = TRUE;
				// clear out the page
				for (k = 0; k < NUMSECTORS; k++)
					flashpage.storedsectors[j].bestsectortimes[k] = 0L;
	
				// set the best time to maximum				
				flashpage.storedsectors[j].bestlapever = 0xFFFFFFFF;
			} // if
		} // for

		if (writepage)
			// write it back out
			DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, PREDPAGESTART + i);
	} // for

	writepage = FALSE;
#endif

	// IO Initialization
	DataFlash_Page_Read(MAX_PAGE_SIZE, flashpage.bigbuff, IODEFPAGE);

	// if page not programmed, fill it up
	if (0xFFFFFFFF == *((u32 *) flashpage.bigbuff)) {

		writepage = TRUE;

		for (i = 0; i < NUMANALOGS; i++) {
			xdata char name[] = "Analogx";

			name[6] = '0' + i;
			strcpy(flashpage.io.analogs[i].pointname, name);
			strcpy(flashpage.io.analogs[i].unitname, "VOLTS");

			flashpage.io.analogs[i].maxscale = 20;
			flashpage.io.analogs[i].lowval = 0.0;
			flashpage.io.analogs[i].highval = 20.0;
			flashpage.io.analogs[i].alarmval = 20.0;
			flashpage.io.analogs[i].alarmdirection = 1;
			flashpage.io.analogs[i].lowreading = 0;
			flashpage.io.analogs[i].highreading = VOLTFULLSCALE;

		} // for
		for (i = 0; i < NUMDIGITALS; i++) {
			xdata char name[] = "Digitalx";

			name[7] = '0' + i;
			strcpy(flashpage.io.digitals[i].pointname, name);

			strcpy(flashpage.io.digitals[i].onname, "ON");
			strcpy(flashpage.io.digitals[i].offname, "OFF");
		} // for

		for (i = 0; i < NUMFREQS; i++) {
			flashpage.io.frequency[i].rpmwarning =
			flashpage.io.frequency[i].rpmlimit = 0;
			flashpage.io.frequency[i].divider = 1;
		} // for

		for (i=0; i < NUMDIGOUTS/2; i++) {
			flashpage.io.digouts[i] = 0x0000;		// default = digital inputs except D4
		} // for

		flashpage.io.digouts[0] = 0x03;					// D4 = camera output default
//		flashpage.io.digouts[0] = 0x0B;					// changed to mobius in V3.70
		flashpage.io.lancconfig = DEFAULTLANC;			// default to most likely LANC device
	} // if
	else {
		// if point name is unprintable, NULL it out
		for (i = 0; i < NUMANALOGS; i++) {
			if (!isprint(flashpage.io.analogs[i].pointname[0]) && flashpage.io.analogs[i].pointname[0] != '\0') {
				flashpage.io.analogs[i].pointname[0] = '\0';
				flashpage.io.analogs[i].maxscale = 20;
				flashpage.io.analogs[i].lowval = 0.0;
				flashpage.io.analogs[i].highval = 20.0;
				flashpage.io.analogs[i].alarmval = 20.0;
				flashpage.io.analogs[i].alarmdirection = 1;
				flashpage.io.analogs[i].lowreading = 0;
				flashpage.io.analogs[i].highreading = VOLTFULLSCALE;
				writepage = TRUE;
			} // if
		} // for
		for (i = 0; i < NUMDIGITALS; i++) {
			if (!isprint(flashpage.io.digitals[i].pointname[0]) && flashpage.io.digitals[i].pointname[0] != '\0') {
				flashpage.io.digitals[i].pointname[0] = '\0';
				strcpy(flashpage.io.digitals[i].onname, "ON");
				strcpy(flashpage.io.digitals[i].offname, "OFF");
				writepage = TRUE;
			} // if
		} // for
	} // else

	if (writepage)
		// write it back out
		DataFlash_Page_Write_Erase(GENBUFFER, MAX_PAGE_SIZE, flashpage.bigbuff, IODEFPAGE);

} // Init_Tables
#endif // conditional compilation