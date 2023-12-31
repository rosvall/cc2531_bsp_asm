; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; All addresses of bit-addressable special function registers in CC2531
; TODO: Split out to one file per peripheral/function, each with all register values/bits defined.

P0.0          = 0x80
P0.1          = 0x81
P0.2          = 0x82
P0.3          = 0x83
P0.4          = 0x84
P0.5          = 0x85
P0.6          = 0x86
P0.7          = 0x87
TCON.IT0      = 0x88
TCON.RFERRIF  = 0x89
TCON.IT1      = 0x8A
TCON.URX0IF   = 0x8B
TCON.ADCIF    = 0x8D
TCON.URX1IF   = 0x8F
P1.0          = 0x90
P1.1          = 0x91
P1.2          = 0x92
P1.3          = 0x93
P1.4          = 0x94
P1.5          = 0x95
P1.6          = 0x96
P1.7          = 0x97
S0CON_ENCIF.0 = 0x98
S0CON_ENCIF.1 = 0x99
P2.0          = 0xA0
P2.1          = 0xA1
P2.2          = 0xA2
P2.3          = 0xA3
P2.4          = 0xA4
IEN0.RFERRIE  = 0xA8
IEN0.ADCIE    = 0xA9
IEN0.URX0IE   = 0xAA
IEN0.URX1IE   = 0xAB
IEN0.ENCIE    = 0xAC
IEN0.STIE     = 0xAD
IEN0.EA       = 0xAF
IEN1.DMAIE    = 0xB8
IEN1.T1IE     = 0xB9
IEN1.T2IE     = 0xBA
IEN1.T3IE     = 0xBB
IEN1.T4IE     = 0xBC
IEN1.P0IE     = 0xBD
IRCON.DMAIF   = 0xC0
IRCON.T1IF    = 0xC1
IRCON.T2IF    = 0xC2
IRCON.T3IF    = 0xC3
IRCON.T4IF    = 0xC4
IRCON.P0IF    = 0xC5
IRCON.STIF    = 0xC7
PSW.P         = 0xD0
PSW.F1        = 0xD1
PSW.OV        = 0xD2
PSW.RS0       = 0xD3
PSW.RS1       = 0xD4
PSW.F0        = 0xD5
PSW.AC        = 0xD6
PSW.CY        = 0xD7
TIMIF.T3OVFIF = 0xD8
TIMIF.T3CH0IF = 0xD9
TIMIF.T3CH1IF = 0xDA
TIMIF.T4OVFIF = 0xDB
TIMIF.T4CH0IF = 0xDC
TIMIF.T4CH1IF = 0xDD
TIMIF.T1OVFIM = 0xDE
A.0           = 0xE0
A.1           = 0xE1
A.2           = 0xE2
A.3           = 0xE3
A.4           = 0xE4
A.5           = 0xE5
A.6           = 0xE6
A.7           = 0xE7
IRCON2.P2IF   = 0xE8
IRCON2.UTX0IF = 0xE9
IRCON2.UTX1IF = 0xEA
IRCON2.P1IF   = 0xEB
IRCON2.WDTIF  = 0xEC
B.0           = 0xF0
B.1           = 0xF1
B.2           = 0xF2
B.3           = 0xF3
B.4           = 0xF4
B.5           = 0xF5
B.6           = 0xF6
B.7           = 0xF7
U1CSR.ACTIVE  = 0xF8
U1CSR_TX.BYTE = 0xF9
U1CSR_RX.BYTE = 0xFA
U1CSR.ERR     = 0xFB
U1CSR.FE      = 0xFC
U1CSR.SLAVE   = 0xFD
U1CSR.RE      = 0xFE
U1CSR.MODE    = 0xFF
