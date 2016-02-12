﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\DUII\Simulation\GUI\Widget\SLIDER_SkinClassic.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	_SLIDER__SkinClassic
CONST	SEGMENT
_SLIDER__SkinClassic DD FLAT:__Paint
	DD	FLAT:__Create
	ORG $+4
CONST	ENDS
EXTRN	_GUI_ALLOC_UnlockH:PROC
EXTRN	_GUI_DrawBitmap:PROC
EXTRN	_bmSliderDotTransparent:BYTE
EXTRN	_WIDGET__DrawVLine:PROC
EXTRN	_LCD_SetColor:PROC
EXTRN	_WIDGET__EFFECT_DrawDownRect:PROC
EXTRN	_GUI_Clear:PROC
EXTRN	_LCD_SetBkColor:PROC
EXTRN	_WM_GetHasTrans:PROC
EXTRN	_GUI__ReduceRect:PROC
EXTRN	_WIDGET__GetClientRect:PROC
EXTRN	_SLIDER_LockH:PROC
EXTRN	__RTC_CheckEsp:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File c:\duii\simulation\gui\widget\slider_skinclassic.c
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT __Paint
_TEXT	SEGMENT
_NumTicks$ = -144					; size = 4
_Range$ = -132						; size = 4
_i$ = -120						; size = 4
_xsize$ = -108						; size = 4
_x0$ = -96						; size = 4
_x$ = -84						; size = 4
_rSlot$ = -72						; size = 8
_rSlider$ = -56						; size = 8
_rFocus$ = -40						; size = 8
_r$ = -24						; size = 8
_pObj$ = -8						; size = 4
_hObj$ = 8						; size = 4
__Paint	PROC						; COMDAT
; Line 43
	push	ebp
	mov	ebp, esp
	sub	esp, 340				; 00000154H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-340]
	mov	ecx, 85					; 00000055H
	mov	eax, -858993460				; ccccccccH
	rep stosd
; Line 48
	mov	eax, DWORD PTR _hObj$[ebp]
	push	eax
	call	_SLIDER_LockH
	add	esp, 4
	mov	DWORD PTR _pObj$[ebp], eax
; Line 49
	lea	eax, DWORD PTR _rFocus$[ebp]
	push	eax
	mov	ecx, DWORD PTR _pObj$[ebp]
	push	ecx
	call	_WIDGET__GetClientRect
	add	esp, 8
; Line 50
	push	1
	lea	eax, DWORD PTR _rFocus$[ebp]
	push	eax
	lea	ecx, DWORD PTR _r$[ebp]
	push	ecx
	call	_GUI__ReduceRect
	add	esp, 12					; 0000000cH
; Line 51
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR [eax+96]
	mov	DWORD PTR _NumTicks$[ebp], ecx
; Line 52
	movsx	eax, WORD PTR _r$[ebp+4]
	movsx	ecx, WORD PTR _r$[ebp]
	sub	eax, ecx
	add	eax, 1
	mov	edx, DWORD PTR _pObj$[ebp]
	movsx	ecx, WORD PTR [edx+100]
	sub	eax, ecx
	mov	DWORD PTR _xsize$[ebp], eax
; Line 53
	movsx	ecx, WORD PTR _r$[ebp]
	mov	edx, DWORD PTR _pObj$[ebp]
	movsx	eax, WORD PTR [edx+100]
	cdq
	sub	eax, edx
	sar	eax, 1
	add	ecx, eax
	mov	DWORD PTR _x0$[ebp], ecx
; Line 54
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR _pObj$[ebp]
	mov	edx, DWORD PTR [eax+84]
	sub	edx, DWORD PTR [ecx+80]
	mov	DWORD PTR _Range$[ebp], edx
; Line 55
	jne	SHORT $LN8@Paint
; Line 56
	mov	DWORD PTR _Range$[ebp], 1
$LN8@Paint:
; Line 69
	mov	eax, DWORD PTR _hObj$[ebp]
	push	eax
	call	_WM_GetHasTrans
	add	esp, 4
	test	eax, eax
	jne	SHORT $LN7@Paint
; Line 70
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR [eax+56]
	push	ecx
	call	_LCD_SetBkColor
	add	esp, 4
; Line 71
	call	_GUI_Clear
$LN7@Paint:
; Line 77
	mov	eax, DWORD PTR _r$[ebp]
	mov	DWORD PTR _rSlider$[ebp], eax
	mov	ecx, DWORD PTR _r$[ebp+4]
	mov	DWORD PTR _rSlider$[ebp+4], ecx
; Line 78
	mov	eax, 5
	mov	WORD PTR _rSlider$[ebp+2], ax
; Line 79
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR _pObj$[ebp]
	mov	edx, DWORD PTR [eax+88]
	sub	edx, DWORD PTR [ecx+80]
	mov	eax, edx
	imul	eax, DWORD PTR _xsize$[ebp]
	xor	edx, edx
	div	DWORD PTR _Range$[ebp]
	mov	ecx, eax
	add	ecx, DWORD PTR _x0$[ebp]
	mov	edx, DWORD PTR _pObj$[ebp]
	movsx	eax, WORD PTR [edx+100]
	cdq
	sub	eax, edx
	sar	eax, 1
	sub	ecx, eax
	mov	WORD PTR _rSlider$[ebp], cx
; Line 80
	movsx	eax, WORD PTR _rSlider$[ebp]
	mov	ecx, DWORD PTR _pObj$[ebp]
	movsx	edx, WORD PTR [ecx+100]
	add	eax, edx
	mov	WORD PTR _rSlider$[ebp+4], ax
; Line 84
	mov	ax, WORD PTR _x0$[ebp]
	mov	WORD PTR _rSlot$[ebp], ax
; Line 85
	mov	eax, DWORD PTR _x0$[ebp]
	add	eax, DWORD PTR _xsize$[ebp]
	mov	WORD PTR _rSlot$[ebp+4], ax
; Line 86
	movsx	eax, WORD PTR _rSlider$[ebp+2]
	movsx	ecx, WORD PTR _rSlider$[ebp+6]
	add	eax, ecx
	cdq
	sub	eax, edx
	sar	eax, 1
	sub	eax, 1
	mov	WORD PTR _rSlot$[ebp+2], ax
; Line 87
	movsx	eax, WORD PTR _rSlot$[ebp+2]
	add	eax, 3
	mov	WORD PTR _rSlot$[ebp+6], ax
; Line 88
	lea	eax, DWORD PTR _rSlot$[ebp]
	push	eax
	mov	ecx, DWORD PTR _pObj$[ebp]
	push	ecx
	call	_WIDGET__EFFECT_DrawDownRect
	add	esp, 8
; Line 92
	cmp	DWORD PTR _NumTicks$[ebp], 0
	jge	SHORT $LN6@Paint
; Line 93
	mov	eax, DWORD PTR _Range$[ebp]
	add	eax, 1
	mov	DWORD PTR _NumTicks$[ebp], eax
; Line 94
	mov	eax, DWORD PTR _xsize$[ebp]
	cdq
	mov	ecx, 5
	idiv	ecx
	cmp	DWORD PTR _NumTicks$[ebp], eax
	jle	SHORT $LN6@Paint
; Line 95
	mov	DWORD PTR _NumTicks$[ebp], 11		; 0000000bH
$LN6@Paint:
; Line 98
	cmp	DWORD PTR _NumTicks$[ebp], 1
	jle	SHORT $LN4@Paint
; Line 99
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR [eax+68]
	push	ecx
	call	_LCD_SetColor
	add	esp, 4
; Line 100
	mov	DWORD PTR _i$[ebp], 0
	jmp	SHORT $LN3@Paint
$LN2@Paint:
	mov	eax, DWORD PTR _i$[ebp]
	add	eax, 1
	mov	DWORD PTR _i$[ebp], eax
$LN3@Paint:
	mov	eax, DWORD PTR _i$[ebp]
	cmp	eax, DWORD PTR _NumTicks$[ebp]
	jge	SHORT $LN4@Paint
; Line 101
	mov	eax, DWORD PTR _xsize$[ebp]
	imul	eax, DWORD PTR _i$[ebp]
	mov	ecx, DWORD PTR _NumTicks$[ebp]
	sub	ecx, 1
	cdq
	idiv	ecx
	add	eax, DWORD PTR _x0$[ebp]
	mov	DWORD PTR _x$[ebp], eax
; Line 102
	push	3
	push	1
	mov	eax, DWORD PTR _x$[ebp]
	push	eax
	mov	ecx, DWORD PTR _pObj$[ebp]
	push	ecx
	call	_WIDGET__DrawVLine
	add	esp, 16					; 00000010H
; Line 103
	jmp	SHORT $LN2@Paint
$LN4@Paint:
; Line 108
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	ecx, DWORD PTR [eax+60]
	push	ecx
	call	_LCD_SetColor
	add	esp, 4
; Line 121
	push	0
	movsx	eax, WORD PTR _rSlider$[ebp]
	sub	eax, 11					; 0000000bH
	push	eax
	push	OFFSET _bmSliderDotTransparent
	call	_GUI_DrawBitmap
	add	esp, 12					; 0000000cH
; Line 124
	call	_GUI_ALLOC_UnlockH
	mov	DWORD PTR _pObj$[ebp], 0
; Line 125
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN16@Paint
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 340				; 00000154H
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	3
$LN16@Paint:
	DD	4
	DD	$LN15@Paint
$LN15@Paint:
	DD	-24					; ffffffe8H
	DD	8
	DD	$LN11@Paint
	DD	-40					; ffffffd8H
	DD	8
	DD	$LN12@Paint
	DD	-56					; ffffffc8H
	DD	8
	DD	$LN13@Paint
	DD	-72					; ffffffb8H
	DD	8
	DD	$LN14@Paint
$LN14@Paint:
	DB	114					; 00000072H
	DB	83					; 00000053H
	DB	108					; 0000006cH
	DB	111					; 0000006fH
	DB	116					; 00000074H
	DB	0
$LN13@Paint:
	DB	114					; 00000072H
	DB	83					; 00000053H
	DB	108					; 0000006cH
	DB	105					; 00000069H
	DB	100					; 00000064H
	DB	101					; 00000065H
	DB	114					; 00000072H
	DB	0
$LN12@Paint:
	DB	114					; 00000072H
	DB	70					; 00000046H
	DB	111					; 0000006fH
	DB	99					; 00000063H
	DB	117					; 00000075H
	DB	115					; 00000073H
	DB	0
$LN11@Paint:
	DB	114					; 00000072H
	DB	0
__Paint	ENDP
; Function compile flags: /Odtp /RTCsu /ZI
_TEXT	ENDS
;	COMDAT __Create
_TEXT	SEGMENT
_hObj$ = 8						; size = 4
__Create PROC						; COMDAT
; Line 131
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
; Line 133
	mov	eax, DWORD PTR _hObj$[ebp]
	mov	DWORD PTR _hObj$[ebp], eax
; Line 134
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
__Create ENDP
_TEXT	ENDS
PUBLIC	_SLIDER_SetSkinClassic
EXTRN	_WM_InvalidateWindow:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _SLIDER_SetSkinClassic
_TEXT	SEGMENT
_pObj$ = -8						; size = 4
_hObj$ = 8						; size = 4
_SLIDER_SetSkinClassic PROC				; COMDAT
; Line 157
	push	ebp
	mov	ebp, esp
	sub	esp, 204				; 000000ccH
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-204]
	mov	ecx, 51					; 00000033H
	mov	eax, -858993460				; ccccccccH
	rep stosd
; Line 160
	mov	eax, DWORD PTR _hObj$[ebp]
	push	eax
	call	_SLIDER_LockH
	add	esp, 4
	mov	DWORD PTR _pObj$[ebp], eax
; Line 161
	mov	eax, DWORD PTR _pObj$[ebp]
	mov	DWORD PTR [eax+76], OFFSET _SLIDER__SkinClassic
; Line 162
	call	_GUI_ALLOC_UnlockH
	mov	DWORD PTR _pObj$[ebp], 0
; Line 163
	mov	eax, DWORD PTR _hObj$[ebp]
	push	eax
	call	_WM_InvalidateWindow
	add	esp, 4
; Line 164
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_SLIDER_SetSkinClassic ENDP
_TEXT	ENDS
PUBLIC	_SLIDER_SetDefaultSkinClassic
EXTRN	_SLIDER__pSkinDefault:DWORD
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _SLIDER_SetDefaultSkinClassic
_TEXT	SEGMENT
_SLIDER_SetDefaultSkinClassic PROC			; COMDAT
; Line 170
	push	ebp
	mov	ebp, esp
	sub	esp, 192				; 000000c0H
	push	ebx
	push	esi
	push	edi
	lea	edi, DWORD PTR [ebp-192]
	mov	ecx, 48					; 00000030H
	mov	eax, -858993460				; ccccccccH
	rep stosd
; Line 171
	mov	DWORD PTR _SLIDER__pSkinDefault, OFFSET _SLIDER__SkinClassic
; Line 172
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
_SLIDER_SetDefaultSkinClassic ENDP
_TEXT	ENDS
END