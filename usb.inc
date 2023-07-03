; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
.area XABS (XDATA,ABS)

.org 0x6200 
USBADDR: ; Function Address  
	;USBADDR_USBADDR:7,                 ; 0:6 USBADDR[0:6]             0000000 R/W    Device address  
	USBADDR_UPDATE                   =  7 ; (reset=0 R)       This bit is set when the USBADDR register is written and cleared when the address becomes 
	                                      ; effective.  

.org 0x6201 
USBPOW: ; Power and Control Register  
	USBPOW_SUSPEND_EN                =  0 ; (reset=0 R/W)     Suspend enable. When this bit is set to 1, suspend mode is entered when the USB has been 
	                                      ; idle for 3 ms.  
	USBPOW_SUSPEND                   =  1 ; (reset=0 R)       Suspend mode entered. This bit is only used when SUSPEND_EN = 1. Reading the USBCIF 
	                                      ; register or asserting RESUME clears this bit.  
	USBPOW_RESUME                    =  2 ; (reset=0 R/W)     Drives resume signaling for remote wakeup. According to the USB Specification, the duration 
	                                      ; of driving resume must be at least 1 ms and no more than 15 ms. It is recommended to keep 
	                                      ; this bit set for approximately 10 ms.  
	USBPOW_RST                       =  3 ; (reset=0 R)       During reset signaling, this bit is set to 1.  
	;USBPOW__reserved:3,               ; 4:6 _reserved                000     R0      Reserved  
	USBPOW_ISO_WAIT_SOF              =  7 ; (reset=0 R/W)     When this bit is set to 1, the USB controller sends zero-length data packets from the time 
	                                      ; INPKT_RDY is asserted and until the first SOF token has been received. This only applies to 
	                                      ; isochronous endpoints.  

.org 0x6202 
USBIIF: ; IN Endpoints and EP0 Interrupt Flags  
	USBIIF_EP0IF                     =  0 ; (reset=0 R/H0)   Interrupt flag for endpoint 0. Cleared by hardware when read  
	USBIIF_INEP1IF                   =  1 ; (reset=0 R/H0)   Interrupt flag for IN endpoint 1. Cleared by hardware when read  
	USBIIF_INEP2IF                   =  2 ; (reset=0 R/H0)   Interrupt flag for IN endpoint 2. Cleared by hardware when read  
	USBIIF_INEP3IF                   =  3 ; (reset=0 R/H0)   Interrupt flag for IN endpoint 3. Cleared by hardware when read  
	USBIIF_INEP4IF                   =  4 ; (reset=0 R/H0)   Interrupt flag for IN endpoint 4. Cleared by hardware when read  
	USBIIF_INEP5IF                   =  5 ; (reset=0 R/H0)   Interrupt flag for IN endpoint 5. Cleared by hardware when read  
	;USBIIF__reserved:2,               ; 6:7 _reserved                00      R0      Reserved  

.org 0x6204 
USBOIF: ; OUT-Endpoint Interrupt Flags  
	;USBOIF__reserved                 =  0 ; (reset=- R0)      Reserved  
	USBOIF_OUTEP1IF                  =  1 ; (reset=0 R/H0)   Interrupt flag for OUT endpoint 1. Cleared by hardware when read  
	USBOIF_OUTEP2IF                  =  2 ; (reset=0 R/H0)   Interrupt flag for OUT endpoint 2. Cleared by hardware when read  
	USBOIF_OUTEP3IF                  =  3 ; (reset=0 R/H0)   Interrupt flag for OUT endpoint 3. Cleared by hardware when read  
	USBOIF_OUTEP4IF                  =  4 ; (reset=0 R/H0)   Interrupt flag for OUT endpoint 4. Cleared by hardware when read  
	USBOIF_OUTEP5IF                  =  5 ; (reset=0 R/H0)   Interrupt flag for OUT endpoint 5. Cleared by hardware when read  
	;USBOIF__reserved:2,               ; 6:7 _reserved                -       R0      Reserved  

.org 0x6206 
USBCIF: ; Common USB Interrupt Flags  
	USBCIF_SUSPENDIF                 =  0 ; (reset=0 R/H0)    Suspend interrupt flag. Cleared by hardware when read  
	USBCIF_RESUMEIF                  =  1 ; (reset=0 R/H0)    Resume interrupt flag. Cleared by hardware when read  
	USBCIF_RSTIF                     =  2 ; (reset=0 R/H0)    Reset interrupt flag. Cleared by hardware when read  
	USBCIF_SOFIF                     =  3 ; (reset=0 R/H0)    Start-of-frame interrupt flag. Cleared by hardware when read  
	;USBCIF__reserved:4,               ; 4:7 _reserved                -       R0       Reserved  

.org 0x6207 
USBIIE: ; IN Endpoints and EP0 Interrupt-Enable Mask  
	USBIIE_EP0IE                     =  0 ; (reset=1 R/W)       Endpoint-0 interrupt enable 
	USBIIE_INEP1IE                   =  1 ; (reset=1 R/W)       IN endpoint-1 interrupt enable 
	USBIIE_INEP2IE                   =  2 ; (reset=1 R/W)       IN endpoint-2 interrupt enable 
	USBIIE_INEP3IE                   =  3 ; (reset=1 R/W)       IN endpoint-3 interrupt enable 
	USBIIE_INEP4IE                   =  4 ; (reset=1 R/W)       IN endpoint- 4 interrupt enable 
	USBIIE_INEP5IE                   =  5 ; (reset=1 R/W)       IN endpoint-5 interrupt enable 
	;USBIIE__reserved:2,               ; 6:7 _reserved                00      R/W     Reserved. Always write 00  

.org 0x6209 
USBOIE: ; OUT Endpoints Interrupt Enable Mask  
	;USBOIE__reserved                 =  0 ; (reset=1 R0)        Reserved  
	USBOIE_OUTEP1IE                  =  1 ; (reset=1 R/W)       OUT endpoint 1 interrupt enable 
	USBOIE_OUTEP2IE                  =  2 ; (reset=1 R/W)       OUT endpoint 2 interrupt enable 
	USBOIE_OUTEP3IE                  =  3 ; (reset=1 R/W)       OUT endpoint 3 interrupt enable 
	USBOIE_OUTEP4IE                  =  4 ; (reset=1 R/W)       OUT endpoint 4 interrupt enable 
	USBOIE_OUTEP5IE                  =  5 ; (reset=1 R/W)       OUT endpoint 5 interrupt enable 
	;USBOIE__reserved:2,               ; 6:7 _reserved                00      R/W       Reserved. Always write 00  

.org 0x620B 
USBCIE: ; Common USB Interrupt-Enable Mask  
	USBCIE_SUSPENDIE                 =  0 ; (reset=0 R/W)     Suspend interrupt enable 
	USBCIE_RESUMEIE                  =  1 ; (reset=1 R/W)     Resume interrupt enable 
	USBCIE_RSTIE                     =  2 ; (reset=1 R/W)     Reset interrupt enable 
	USBCIE_SOFIE                     =  3 ; (reset=0 R/W)     Start-of-frame interrupt enable 
	;USBCIE__reserved:4,               ; 4:7 _reserved                -       R0      Reserved  

.org 0x620C 
USBFRML: ; Current Frame Number (Low Byte)
	; FRAME[0:7]            0x00     R      Low byte of 11-bit frame number  

.org 0x620D 
USBFRMH: ; Current Frame Number (High Byte)  
	;USBFRMH_FRAME:3,                   ; 0:2 FRAME[18:0]              000     R      3 MSBs of 11-bit frame number  
	;USBFRMH__reserved:5,               ; 3:7 _reserved                -       R0     Reserved  

.org 0x620E 
USBINDEX: ; Current-Endpoint Index Register  
	;USBINDEX:4,                ; 0:3 USBINDEX[0:3]            0000    R/W    Endpoint selected. Must be set to a value in the range 0-5  
	;_reserved:4,               ; 4:7 _reserved                -       R0     Reserved  

.org 0x620F 
USBCTRL: ; USB Control Register  
	USBCTRL_USB_EN                   =  0 ; (reset=0 R/W)    USB enable. The USB controller is reset when writing 0 to this bit.  
	USBCTRL_PLL_EN                   =  1 ; (reset=0 R/W)    48-MHz USB PLL enable. When this bit is set, the 48-MHz PLL is started. However, the USB 
	                                      ; must not be accessed before the PLL has locked, that is, PLL_LOCKED is 1. This bit can only be 
	                                      ; set when USB_EN = 1. 
	                                      ; Note: The PLL must be disabled before exiting active mode and re-enabled after entering active 
	                                      ; mode.  
	;_reserved                =  2 ; (reset=0 R/W)    Reserved. Always write 0  
	;_reserved:4,               ; 3:6 _reserved                -       R0     Reserved  
	USBCTRL_PLL_LOCKED               =  7 ; (reset=0 R)      PLL locked status  

.org 0x6210 
USBMAXI: ; Maximum Packet Size for IN Endpoint{1-5}
	                                      ; USBMAXI[0:7]      0x00         R/W      Maximum packet size, in units of 8 bytes, for IN endpoint selected by USBINDEX register. The 
	                                      ; value of this register should correspond to the wMaxPacketSize field in the standard endpoint 
	                                      ; descriptor for the endpoint. This register must not be set to a value greater than the available 
	                                      ; FIFO memory for the endpoint.  

.org 0x6211 
USBCS0: ; EP0 Control and Status (USBINDEX = 0)  
	USBCS0_OUTPKT_RDY                =  0 ; (reset=0 R)      Data packet received. This bit is set when an incoming data packet has been placed in the 
	                                      ; OUT FIFO. An interrupt request (EP0) is generated if the interrupt is enabled. Set 
	                                      ; CLR_OUTPKT_RDY = 1 to de-assert this bit.  
	USBCS0_INPKT_RDY                 =  1 ; (reset=0 R/W) H0 Set this bit when a data packet has been loaded into the EP0 FIFO to notify the USB 
	                                      ; controller that a new data packet is ready to be transferred. When the data packet has been 
	                                      ; sent, this bit is cleared, and an interrupt request (EP0) is generated if the interrupt is 
	                                      ; enabled.  
	USBCS0_SENT_STALL                =  2 ; (reset=0 R/W) H1 This bit is set when a STALL handshake has been sent. An interrupt request (EP0) is 
	                                      ; generated if the interrupt is enabled. This bit must be cleared from firmware.  
	USBCS0_DATA_END                  =  3 ; (reset=0 R/W) H0 This bit is used to signal the end of a data transfer and must be asserted in the following 
	                                      ; three situations: 
	                                      ; 1: When the last data packet has been loaded and USBCS0.INPKT_RDY is set to 1 
	                                      ; 2: When the last data packet has been unloaded and USBCS0.CLR_OUTPKT_RDY is set 
	                                      ; to 1 
	                                      ; 3: When USBCS0.INPKT_RDY has been asserted without having loaded the FIFO (for 
	                                      ; sending a zero-length data packet). 
	                                      ; The USB controller clears this bit automatically.  
	USBCS0_SETUP_END                 =  4 ; (reset=0 R)      This bit is set if the control transfer ends due to a premature end-of-control transfer. The 
	                                      ; FIFO is flushed and an interrupt request (EP0) is generated if the interrupt is enabled. 
	                                      ; Setting CLR_SETUP_END = 1 de-asserts this bit.  
	USBCS0_SEND_STALL                =  5 ; (reset=0 R/W) H0 Set this bit to 1 to terminate the current transaction. The USB controller sends the STALL 
	                                      ; handshake and this bit is de-asserted.  
	USBCS0_CLR_OUTPKT_RDY            =  6 ; (reset=0 R/W) H0 Set this bit to 1 to de-assert the OUTPKT_RDY bit of this register. This bit is cleared 
	                                      ; automatically.  
	USBCS0_CLR_SETUP_END             =  7 ; (reset=0 R/W) H0 Set this bit to 1 to de-assert the SETUP_END bit of this register. This bit is cleared 
	                                      ; automatically.  

.org 0x6211 
USBCSIL: ; IN EP{1-5} Control and Status, Low  
	USBCSIL_INPKT_RDY                =  0 ; (reset=0 R/W) H0     Set this bit when a data packet has been loaded into the IN FIFO to notify the USB 
	                                      ;        controller that a new data packet is ready to be transferred. When the data packet has 
	                                      ; been sent, this bit is cleared, and an interrupt request (IN EP{1-5}) is generated if the 
	                                      ; interrupt is enabled.  
	USBCSIL_PKT_PRESENT              =  1 ; (reset=0 R)        This bit is 1 when there is at least one packet in the IN FIFO.  
	USBCSIL_UNDERRUN                 =  2 ; (reset=0 R/W)      In isochronous mode, this bit is set if an IN token is received when 
	                                      ; INPKT_RDY =                0, and a zero-length data packet is transmitted in response to the 
	                                      ; IN token. In bulk or interrupt mode, this bit is set when a NAK is returned in response to an 
	                                      ; IN token. Firmware should clear this bit.  
	USBCSIL_FLUSH_PACKET             =  3 ; (reset=0 R/W) H0     Set to 1 to flush next packet that is ready to transfer from the IN FIFO. The INPKT_RDY bit 
	                                      ;        in this register is cleared. If there are two packets in the IN FIFO due to double buffering, 
	                                      ; this bit must be set twice to completely flush the IN FIFO. This bit is automatically cleared.  
	USBCSIL_SEND_STALL               =  4 ; (reset=0 R/W)      Set this bit to 1 to make the USB controller reply with a STALL handshake when receiving 
	                                      ; IN tokens. Firmware must clear this bit to end the STALL condition. It is not possible to stall 
	                                      ; an isochronous endpoint                                                        ; thus, this bit only has an effect if the IN endpoint is configured as 
	                                      ; bulk or interrupt.  
	USBCSIL_SENT_STALL               =  5 ; (reset=0 R/W)      This bit is set when a STALL handshake has been sent. The FIFO is flushed and the 
	                                      ; INPKT_RDY bit in this register is de-asserted. An interrupt request (IN EP{1-5}) is 
	                                      ; generated if the interrupt is enabled. This bit must be cleared from firmware.  
	USBCSIL_CLR_DATA_TOG             =  6 ; (reset=0 R/W) H0     Setting this bit resets the data toggle to 0. Thus, setting this bit forces the next data packet 
	                                      ;        to be a DATA0 packet. This bit is automatically cleared.  
	;USBCSIL__reserved                =  7 ; (reset=0 R0)       Reserved  

.org 0x6212 
USBCSIH: ; IN EP{1-5} Control and Status, High  
	USBCSIH_IN_DBL_BUF               =  0 ; (reset=0 R/W)      Double buffering enable (IN FIFO) 
	                                      ; 0:    Double buffering disabled 
	                                      ; 1:    Double buffering enabled  
	;USBCSIH__reserved:2,               ; 1:2 _reserved                0       R0      Reserved  
	USBCSIH_FORCE_DATA_TOG           =  3 ; (reset=0 R/W)      Setting this bit forces the IN endpoint data toggle to switch and the data packet to be 
	                                      ; flushed from the IN FIFO, even though an ACK was received. This feature can be useful 
	                                      ; when reporting rate feedback for isochronous endpoints.  
	;USBCSIH__reserved:2,               ; 4:5 _reserved               10       R/W     Reserved. Always write 10  
	USBCSIH_EN                       =  5 ; (reset=1 R/W)      Always write 1
	USBCSIH_ISO                      =  6 ; (reset=0 R/W)      Selects IN endpoint type 
	                                      ; 0:    Bulk or interrupt 
	                                      ; 1:    Isochronous  
	USBCSIH_AUTOSET                  =  7 ; (reset=0 R/W)      When this bit is 1, the USBCSIL.INPKT_RDY bit is automatically asserted when a data 
	                                      ; packet of maximum size (specified by USBMAXI) has been loaded into the IN FIFO.  

.org 0x6213 
USBMAXO: ; Max. Packet Size for OUT EP{1-5}
      ; USBMAXO[0:7]        0x00        R/W     Maximum packet size, in units of 8 bytes, for OUT endpoint selected by USBINDEX register. 
      ; The value of this register should correspond to the wMaxPacketSize field in the standard 
      ; endpoint descriptor for the endpoint. This register must not be set to a value greater than the 
      ; available FIFO memory for the endpoint.  

.org 0x6214 
USBCSOL: ; OUT EP{1-5} Control and Status, Low  
	USBCSOL_OUTPKT_RDY               =  0 ; (reset=0 R/W)      This bit is set when a packet has been received and is ready to be read from the OUT 
	                                      ; FIFO. An interrupt request (OUT EP{1-5}) is generated if the interrupt is enabled. This bit 
	                                      ; should be cleared when the packet has been unloaded from the FIFO.  
	USBCSOL_FIFO_FULL                =  1 ; (reset=0 R)        This bit is asserted when no more packets can be loaded into the OUT FIFO because it is 
	                                      ; full.  
	USBCSOL_OVERRUN                  =  2 ; (reset=0 R/W)      This bit is set when an OUT packet cannot be loaded into the OUT FIFO. Firmware 
	                                      ; should clear this bit. This bit is only valid in isochronous mode.  
	USBCSOL_DATA_ERROR               =  3 ; (reset=0 R)        This bit is set if there is a CRC or bit-stuff error in the packet received. Cleared when 
	                                      ; OUTPKT_RDY is cleared. This bit is only valid if the OUT endpoint is isochronous.  
	USBCSOL_FLUSH_PACKET             =  4 ; (reset=0 R/W) H0     Set to 1 to flush the next packet that is to be read from the OUT FIFO. The 
	                                      ;        OUTPKT_RDY bit in this register is cleared. If there are two packets in the OUT FIFO 
	                                      ; due to double buffering, this bit must be set twice to completely flush the OUT FIFO. This 
	                                      ; bit is automatically cleared after a write to 1.  
	USBCSOL_SEND_STALL               =  5 ; (reset=0 R/W)      Set this bit to 1 to make the USB controller reply with a STALL handshake when 
	                                      ; receiving OUT tokens. Firmware must clear this bit to end the STALL condition. It is not 
	                                      ; possible to stall an isochronous endpoint; thus, this bit only has an effect if the IN 
	                                      ; endpoint is configured as bulk or interrupt.  
	USBCSOL_SENT_STALL               =  6 ; (reset=0 R/W)      This bit is set when a STALL handshake has been sent. An interrupt request (OUT 
	                                      ; EP{1-5}) is generated if the interrupt is enabled. This bit must be cleared from firmware.  
	USBCSOL_CLR_DATA_TOG             =  7 ; (reset=0 R/W) H0     Setting this bit resets the data toggle to 0. Thus, setting this bit forces the next data 
	                                      ;        packet to be a DATA0 packet. This bit is automatically cleared.  

.org 0x6215 
USBCSOH: ; OUT EP{1-5} Control and Status, High  
	USBCSOH_OUT_DBL_BUF              =  0 ; (reset=0 R/W)     Double buffering enable (OUT FIFO) 
	                                      ; 0    Double buffering disabled 
	                                      ; 1    Double buffering enabled  
	;USBCSOH__reserved:3,               ; 1:3 _reserved                000     R0      Reserved  
	;USBCSOH__reserved:2,               ; 4:5 _reserved                00      R/W     Reserved. Always write 00  
	USBCSOH_ISO                      =  6 ; (reset=0 R/W)     Selects OUT endpoint type 
	                                      ; 0    Bulk or interrupt 
	                                      ; 1    Isochronous  
	USBCSOH_AUTOCLEAR                =  7 ; (reset=0 R/W)     When this bit is set to 1, the USBCSOL.OUTPKT_RDY bit is automatically cleared when a 
	                                      ; data packet of maximum size (specified by USBMAXO) has been unloaded to the OUT 
	                                      ; FIFO.  

.org 0x6216 
USBCNT0: ; Number of Received Bytes in EP0 FIFO (USBINDEX = 0)  
	; 0:5 USBCNT0[0:5]             000000  R          Number of received bytes into EP 0 FIFO. Only valid when OUTPKT_RDY is asserted  
	;; 6:7 _reserved                00      R0         Reserved  

.org 0x6216 
USBCNTL: ; Number of Bytes in EP{1-5} OUT FIFO, Low
	; USBCNT[0:7]          0x00       R            8 LSBs of number of received bytes in OUT FIFO selected by USBINDEX register. Only 
	; valid when USBCSOL.OUTPKT_RDY is asserted.  

.org 0x6217 
USBCNTH: ; Number of Bytes in EP{1-5} OUT FIFO, High  
      ;USBCNTH_USBCNT:3,                                                               ; 0:2 USBCNT[18:0]             000     R          3 MSBs of number of received bytes in OUT FIFO selected by USBINDEX register. Only 
	; valid when USBCSOL.OUTPKT_RDY is set  
	;USBCNTH__reserved:5,               ; 3:7 _reserved                00000   R0         Reserved  

.org 0x6220 
USBF0: ; Endpoint 0 FIFO
      ; USBF0[0:7]           0x00       R/W          Endpoint 0 FIFO. Reading this register unloads one byte from the EP0 FIFO. Writing to 
      ; this register loads one byte into the EP0 FIFO. 
      ; Note: The FIFO memory for EP0 is used for both incoming and outgoing data packets.  

.org 0x6222 
USBF1: ; Endpoint 1 FIFO
      ; USBF1[0:7]           0x00       R/W          Endpoint 1 FIFO register. Reading this register unloads one byte from the EP1 OUT 
      ; FIFO. Writing to this register loads one byte into the EP1 IN FIFO.  

.org 0x6224 
USBF2: ; Endpoint 2 FIFO
	; USBF2[0:7]           0x00       R/W          Endpoint 2 FIFO register. Reading this register unloads one byte from the EP2 OUT 
	; FIFO. Writing to this register loads one byte into the EP2 IN FIFO.  

.org 0x6226 
USBF3: ; Endpoint 3 FIFO
      ; USBF3[0:7]           0x00       R/W          Endpoint 3 FIFO register. Reading this register unloads one byte from the EP3 OUT 
      ; FIFO. Writing to this register loads one byte into the EP3 IN FIFO.  

.org 0x6228 
USBF4: ; Endpoint 4 FIFO
      ; USBF4[0:7]           0x00       R/W          Endpoint 4 FIFO register. Reading this register unloads one byte from the EP4 OUT 
      ; FIFO. Writing to this register loads one byte into the EP4 IN FIFO.  

.org 0x622A 
USBF5: ; Endpoint 5 FIFO
      ; USBF5[0:7]       0x00        R/W      Endpoint 5 FIFO register. Reading this register unloads one byte from the EP5 OUT 
      ; FIFO. Writing to this register loads one byte into the EP5 IN FIFO.  


USB_EP0_SIZE = 32
