; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; UART/SPI SFR
U0CSR  = 0x86
U1CSR  = 0xf8
U0DBUF = 0xc1
U1DBUF = 0xf9
U0BAUD = 0xc2
U1BAUD = 0xfa
U0UCR  = 0xc4
U1UCR  = 0xfb
U0GCR  = 0xc5
U1GCR  = 0xfc


; UART/SPI SFR Bits
U1CSR_ACTIVE    = U1CSR + 0
U1CSR_TX_BYTE   = U1CSR + 1
U1CSR_RX_BYTE   = U1CSR + 2
U1CSR_ERR       = U1CSR + 3
U1CSR_FE        = U1CSR + 4
U1CSR_SLAVE     = U1CSR + 5
U1CSR_RE        = U1CSR + 6
U1CSR_UART_MODE = U1CSR + 7


; Selected constants
U1BAUD_BAUD_M_2000000 = 0
U1GCR_BAUD_E_2000000 = 16
PERCFG_U1_ALT2 = 1 << 1
