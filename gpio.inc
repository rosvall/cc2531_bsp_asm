; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

P0     = 0x80
P0IEN  = 0xab
P0SEL  = 0xf3
P0DIR  = 0xfd
P0INP  = 0x8f
P0IFG  = 0x89

PICTL  = 0x8c
P1INP  = 0xf6
P1DIR  = 0xfe
P1SEL  = 0xf4
P1IFG  = 0x8a
P1IEN  = 0x8d
P1     = 0x90

P2INP  = 0xf7
P2DIR  = 0xff
P2SEL  = 0xf5
P2IFG  = 0x8b
P2IEN  = 0xac
P2     = 0xa0

PERCFG = 0xf1

; peripheral constants
PERCFG_T1_ALT2 = 1 << 6
