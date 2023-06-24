; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; Sleep registers
SLEEPCMD = 0xbe
SLEEPSTA = 0x9d

; Register bits
SLEEPSTA_POWER_ON  = 0 << 3
SLEEPSTA_EXT_RESET = 1 << 3
SLEEPSTA_WATCHDOG  = 2 << 3
SLEEPSTA_CLOCKLOSS = 3 << 3
