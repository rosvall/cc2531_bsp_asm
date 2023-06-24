; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

USBADDR  = 0x6200 ; Function Address
USBPOW   = 0x6201 ; Power and Control Register
USBIIF   = 0x6202 ; IN Endpoints and EP0 Interrupt Flags
USBOIF   = 0x6204 ; OUT-Endpoint Interrupt Flags
USBCIF   = 0x6206 ; Common USB Interrupt Flags
USBIIE   = 0x6207 ; IN Endpoints and EP0 Interrupt-Enable Mask
USBOIE   = 0x6209 ; OUT Endpoints Interrupt Enable Mask
USBCIE   = 0x620B ; Common USB Interrupt-Enable Mask
USBFRML  = 0x620C ; Current Frame Number (Low Byte)
USBFRMH  = 0x620D ; Current Frame Number (High Byte)
USBINDEX = 0x620E ; Current-Endpoint Index Register
USBCTRL  = 0x620F ; USB Control Register
USBCS0   = 0x6211 ; EP0 Control and Status (USBINDEX = 0)
USBMAXI  = 0x6210 ; Maximum Packet Size for IN Endpoint{1-5}
USBCSIL  = 0x6211 ; IN EP{1-5} Control and Status, Low
USBCSIH  = 0x6212 ; IN EP{1-5} Control and Status, High
USBMAXO  = 0x6213 ; Max. Packet Size for OUT EP{1-5}
USBCSOL  = 0x6214 ; OUT EP{1-5} Control and Status, Low
USBCSOH  = 0x6215 ; OUT EP{1-5} Control and Status, High
USBCNT0  = 0x6216 ; Number of Received Bytes in EP0 FIFO (when USBINDEX = 0)
USBCNTL  = 0x6216 ; Number of Bytes in EP{1-5} OUT FIFO, Low
USBCNTH  = 0x6217 ; Number of Bytes in EP{1–5} OUT FIFO, High
USBF0    = 0x6220 ; Endpoint 0 FIFO

; usb constants

USBCI_SUSPEND = 1 << 0
USBCI_RESUME  = 1 << 1
USBCI_RST     = 1 << 2
USBCI_SOF     = 1 << 3

USBCTRL_USB_EN     = 1 << 0
USBCTRL_PLL_EN     = 1 << 1
USBCTRL_PLL_LOCKED = 1 << 7 

USBCS0_OUTPKT_RDY     = 1 << 0
USBCS0_INPKT_RDY      = 1 << 1
USBCS0_SENT_STALL     = 1 << 2
USBCS0_DATA_END       = 1 << 3
USBCS0_SETUP_END      = 1 << 4
USBCS0_SEND_STALL     = 1 << 5
USBCS0_CLR_OUTPKT_RDY = 1 << 6
USBCS0_CLR_SETUP_END  = 1 << 7

USB_EP0_SIZE = 32
