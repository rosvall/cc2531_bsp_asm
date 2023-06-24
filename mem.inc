; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

MPAGE      = 0x93
MEMCTR     = 0xc7
FMAP = 0x9f

XMAP = 0x8000

; CC2531 has 8 kB SRAM
RAM_SIZE        = 8*1024
; The data address space is 256 bytes
DATA_SIZE       = 256
; And the data address space can be found in the xdata address space at the top
; of SRAM
DATA_IN_XDATA   = RAM_SIZE - DATA_SIZE
