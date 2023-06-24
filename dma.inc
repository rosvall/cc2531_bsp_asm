; Copyright (c) 2023 Andreas Sig Rosvall
; SPDX-FileCopyrightText: 2023 Andreas Sig Rosvall
;
; SPDX-License-Identifier: GPL-3.0-or-later

; SFR
DMA1CFGL   = 0xd2
DMA1CFGH   = 0xd3
DMA0CFGL   = 0xd4
DMA0CFGH   = 0xd5
DMAARM     = 0xd6
DMAREQ     = 0xd7


; DMA Constants

DMA_CH0 = 1 << 0
DMA_CH1 = 1 << 1
DMA_CH2 = 1 << 2
DMA_CH3 = 1 << 3
DMA_CH4 = 1 << 4

DMA_ABORT = 1 << 7


DMA_TRIG_NONE      =  0
DMA_TRIG_PREV      =  1
DMA_TRIG_T1_CH0    =  2
DMA_TRIG_T1_CH1    =  3
DMA_TRIG_T1_CH2    =  4
DMA_TRIG_T2_EVENT1 =  5
DMA_TRIG_T2_EVENT2 =  6
DMA_TRIG_T3_CH0    =  7
DMA_TRIG_T3_CH1    =  8
DMA_TRIG_T4_CH0    =  9
DMA_TRIG_T4_CH1    = 10
DMA_TRIG_ST        = 11
DMA_TRIG_IOC_0     = 12
DMA_TRIG_IOC_1     = 13
DMA_TRIG_URX0      = 14
DMA_TRIG_UTX0      = 15
DMA_TRIG_URX1      = 16
DMA_TRIG_UTX1      = 17
DMA_TRIG_FLASH     = 18
DMA_TRIG_RADIO     = 19
DMA_TRIG_ADC_CHALL = 20
DMA_TRIG_ADC_CH11  = 21
DMA_TRIG_ADC_CH21  = 22
DMA_TRIG_ADC_CH32  = 23
DMA_TRIG_ADC_CH42  = 24
DMA_TRIG_ADC_CH53  = 25
DMA_TRIG_ADC_CH63  = 26
DMA_TRIG_ADC_CH74  = 27
DMA_TRIG_ADC_CH84  = 28
DMA_TRIG_ENC_DW    = 29
DMA_TRIG_ENC_UP    = 30
DMA_TRIG_DBG_BW    = 31

DMA_DST_CONST = 0 << 4
DMA_DST_INC_1 = 1 << 4
DMA_DST_INC_2 = 2 << 4
DMA_DST_DEC_1 = 3 << 4

DMA_SRC_CONST = 0 << 6
DMA_SRC_INC_1 = 1 << 6
DMA_SRC_INC_2 = 2 << 6
DMA_SRC_DEC_1 = 3 << 6

DMA_BYTEMODE  = 0 << 5
DMA_BLOCKMODE = 1 << 5

DMA_ONESHOT = 0 << 6
DMA_REPEAT  = 1 << 6

DMA_WORD8  = 0 << 7
DMA_WORD16 = 1 << 7

DMA_PRIO_LOW     = 0 << 0
DMA_PRIO_ASSURED = 1 << 0
DMA_PRIO_HIGH    = 2 << 0

DMA_NO_MASK8 = 0 << 2
DMA_MASK8    = 1 << 2

DMA_INTR_DISABLE = 0 << 3
DMA_INTR_ENABLE  = 1 << 3