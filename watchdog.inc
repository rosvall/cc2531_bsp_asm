; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; Watchdog register
WDCTL = 0xc9

; Watchdog register bits
WDCTL_250MS         = 0b01 << 0
WDCTL_2MS           = 0b11 << 0
WDCTL_WATCHDOG_MODE = 0b10 << 2
WDCTL_FEED1         = 0xa0
WDCTL_FEED2         = 0x50
