﻿; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.40219.01 

	TITLE	C:\DUII\Simulation\GUI\Core\GUI_SelectLayer.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	_GUI_SelectLayer
EXTRN	_GUI_SelectLCD:PROC
EXTRN	_GUI_Context:BYTE
EXTRN	__RTC_CheckEsp:PROC
EXTRN	__RTC_Shutdown:PROC
EXTRN	__RTC_InitBase:PROC
;	COMDAT rtc$TMZ
; File c:\duii\simulation\gui\core\gui_selectlayer.c
rtc$TMZ	SEGMENT
__RTC_Shutdown.rtc$TMZ DD FLAT:__RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
__RTC_InitBase.rtc$IMZ DD FLAT:__RTC_InitBase
; Function compile flags: /Odtp /RTCsu /ZI
rtc$IMZ	ENDS
;	COMDAT _GUI_SelectLayer
_TEXT	SEGMENT
_OldIndex$ = -8						; size = 4
_Index$ = 8						; size = 4
_GUI_SelectLayer PROC					; COMDAT
; Line 49
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
; Line 51
	movzx	eax, BYTE PTR _GUI_Context+17
	mov	DWORD PTR _OldIndex$[ebp], eax
; Line 53
	cmp	DWORD PTR _Index$[ebp], 1
	jae	SHORT $LN1@GUI_Select
; Line 54
	mov	al, BYTE PTR _Index$[ebp]
	mov	BYTE PTR _GUI_Context+17, al
; Line 55
	call	_GUI_SelectLCD
$LN1@GUI_Select:
; Line 63
	mov	eax, DWORD PTR _OldIndex$[ebp]
; Line 64
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_SelectLayer ENDP
_TEXT	ENDS
PUBLIC	_GUI_AssignCursorLayer
EXTRN	_GUI_DEVICE__GetpDriver:PROC
EXTRN	@_RTC_CheckStackVars@8:PROC
_BSS	SEGMENT
__aCursorLayer DD 01H DUP (?)
; Function compile flags: /Odtp /RTCsu /ZI
_BSS	ENDS
;	COMDAT _GUI_AssignCursorLayer
_TEXT	SEGMENT
_pDevice$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_CursorLayer$ = 12					; size = 4
_GUI_AssignCursorLayer PROC				; COMDAT
; Line 70
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
; Line 73
	mov	eax, DWORD PTR _LayerIndex$[ebp]
	push	eax
	call	_GUI_DEVICE__GetpDriver
	add	esp, 4
	mov	DWORD PTR _pDevice$[ebp], eax
; Line 74
	cmp	DWORD PTR _pDevice$[ebp], 0
	je	SHORT $LN3@GUI_Assign
; Line 75
	mov	esi, esp
	push	3
	lea	eax, DWORD PTR _pDevice$[ebp]
	push	eax
	mov	ecx, DWORD PTR _pDevice$[ebp]
	mov	edx, DWORD PTR [ecx+12]
	mov	eax, DWORD PTR [edx+36]
	call	eax
	add	esp, 8
	cmp	esi, esp
	call	__RTC_CheckEsp
	test	eax, eax
	je	SHORT $LN3@GUI_Assign
; Line 76
	mov	eax, DWORD PTR _LayerIndex$[ebp]
	mov	ecx, DWORD PTR _CursorLayer$[ebp]
	mov	DWORD PTR __aCursorLayer[eax*4], ecx
$LN3@GUI_Assign:
; Line 79
	push	edx
	mov	ecx, ebp
	push	eax
	lea	edx, DWORD PTR $LN7@GUI_Assign
	call	@_RTC_CheckStackVars@8
	pop	eax
	pop	edx
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
	npad	2
$LN7@GUI_Assign:
	DD	1
	DD	$LN6@GUI_Assign
$LN6@GUI_Assign:
	DD	-8					; fffffff8H
	DD	4
	DD	$LN5@GUI_Assign
$LN5@GUI_Assign:
	DB	112					; 00000070H
	DB	68					; 00000044H
	DB	101					; 00000065H
	DB	118					; 00000076H
	DB	105					; 00000069H
	DB	99					; 00000063H
	DB	101					; 00000065H
	DB	0
_GUI_AssignCursorLayer ENDP
_TEXT	ENDS
PUBLIC	_GUI_GetCursorLayer
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_GetCursorLayer
_TEXT	SEGMENT
_r$ = -8						; size = 4
_Index$ = 8						; size = 4
_GUI_GetCursorLayer PROC				; COMDAT
; Line 85
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
; Line 87
	mov	DWORD PTR _r$[ebp], 0
; Line 88
	cmp	DWORD PTR _Index$[ebp], 1
	jae	SHORT $LN1@GUI_GetCur
; Line 89
	mov	eax, DWORD PTR _Index$[ebp]
	mov	ecx, DWORD PTR __aCursorLayer[eax*4]
	mov	DWORD PTR _r$[ebp], ecx
$LN1@GUI_GetCur:
; Line 91
	mov	eax, DWORD PTR _r$[ebp]
; Line 92
	pop	edi
	pop	esi
	pop	ebx
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_GetCursorLayer ENDP
_TEXT	ENDS
PUBLIC	_GUI_SetLayerPosEx
EXTRN	_LCD_SetPosEx:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_SetLayerPosEx
_TEXT	SEGMENT
_r$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_xPos$ = 12						; size = 4
_yPos$ = 16						; size = 4
_GUI_SetLayerPosEx PROC					; COMDAT
; Line 98
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
; Line 102
	mov	eax, DWORD PTR _yPos$[ebp]
	push	eax
	mov	ecx, DWORD PTR _xPos$[ebp]
	push	ecx
	mov	edx, DWORD PTR _LayerIndex$[ebp]
	push	edx
	call	_LCD_SetPosEx
	add	esp, 12					; 0000000cH
	mov	DWORD PTR _r$[ebp], eax
; Line 104
	mov	eax, DWORD PTR _r$[ebp]
; Line 105
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_SetLayerPosEx ENDP
_TEXT	ENDS
PUBLIC	_GUI_SetLayerSizeEx
EXTRN	_LCD_SetSizeEx:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_SetLayerSizeEx
_TEXT	SEGMENT
_r$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_xSize$ = 12						; size = 4
_ySize$ = 16						; size = 4
_GUI_SetLayerSizeEx PROC				; COMDAT
; Line 111
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
; Line 115
	mov	eax, DWORD PTR _ySize$[ebp]
	push	eax
	mov	ecx, DWORD PTR _xSize$[ebp]
	push	ecx
	mov	edx, DWORD PTR _LayerIndex$[ebp]
	push	edx
	call	_LCD_SetSizeEx
	add	esp, 12					; 0000000cH
	mov	DWORD PTR _r$[ebp], eax
; Line 117
	mov	eax, DWORD PTR _r$[ebp]
; Line 118
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_SetLayerSizeEx ENDP
_TEXT	ENDS
PUBLIC	_GUI_SetLayerVisEx
EXTRN	_LCD_SetVisEx:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_SetLayerVisEx
_TEXT	SEGMENT
_r$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_OnOff$ = 12						; size = 4
_GUI_SetLayerVisEx PROC					; COMDAT
; Line 124
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
; Line 128
	mov	eax, DWORD PTR _OnOff$[ebp]
	push	eax
	mov	ecx, DWORD PTR _LayerIndex$[ebp]
	push	ecx
	call	_LCD_SetVisEx
	add	esp, 8
	mov	DWORD PTR _r$[ebp], eax
; Line 130
	mov	eax, DWORD PTR _r$[ebp]
; Line 131
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_SetLayerVisEx ENDP
_TEXT	ENDS
PUBLIC	_GUI_SetLayerAlphaEx
EXTRN	_LCD_SetAlphaEx:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_SetLayerAlphaEx
_TEXT	SEGMENT
_r$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_Alpha$ = 12						; size = 4
_GUI_SetLayerAlphaEx PROC				; COMDAT
; Line 137
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
; Line 141
	mov	eax, DWORD PTR _Alpha$[ebp]
	push	eax
	mov	ecx, DWORD PTR _LayerIndex$[ebp]
	push	ecx
	call	_LCD_SetAlphaEx
	add	esp, 8
	mov	DWORD PTR _r$[ebp], eax
; Line 143
	mov	eax, DWORD PTR _r$[ebp]
; Line 144
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_SetLayerAlphaEx ENDP
_TEXT	ENDS
PUBLIC	_GUI_GetLayerPosEx
EXTRN	_LCD_GetPosEx:PROC
; Function compile flags: /Odtp /RTCsu /ZI
;	COMDAT _GUI_GetLayerPosEx
_TEXT	SEGMENT
_r$ = -8						; size = 4
_LayerIndex$ = 8					; size = 4
_pxPos$ = 12						; size = 4
_pyPos$ = 16						; size = 4
_GUI_GetLayerPosEx PROC					; COMDAT
; Line 150
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
; Line 154
	mov	eax, DWORD PTR _pyPos$[ebp]
	push	eax
	mov	ecx, DWORD PTR _pxPos$[ebp]
	push	ecx
	mov	edx, DWORD PTR _LayerIndex$[ebp]
	push	edx
	call	_LCD_GetPosEx
	add	esp, 12					; 0000000cH
	mov	DWORD PTR _r$[ebp], eax
; Line 155
	cmp	DWORD PTR _r$[ebp], 0
	je	SHORT $LN2@GUI_GetLay
; Line 156
	mov	eax, DWORD PTR _pxPos$[ebp]
	mov	DWORD PTR [eax], 0
; Line 157
	mov	eax, DWORD PTR _pyPos$[ebp]
	mov	DWORD PTR [eax], 0
$LN2@GUI_GetLay:
; Line 160
	pop	edi
	pop	esi
	pop	ebx
	add	esp, 204				; 000000ccH
	cmp	ebp, esp
	call	__RTC_CheckEsp
	mov	esp, ebp
	pop	ebp
	ret	0
_GUI_GetLayerPosEx ENDP
_TEXT	ENDS
END
