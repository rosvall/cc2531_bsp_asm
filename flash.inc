; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; XSFR
FCTL       = 0x6270
FADDRL     = 0x6271
FADDRH     = 0x6272
FWDATA     = 0x6273

; Flash register bits
FCTL_ERASE = 1 << 0
FCTL_WRITE = 1 << 1

; Constants
FLASH_PAGE_SIZE =   2*1024
FLASH_BANK_SIZE =  32*1024
MAX_FLASH_SIZE  = 256*1024
MAX_BANK_COUNT  = MAX_FLASH_SIZE/FLASH_BANK_SIZE
