/** @file reg_pmm.h
 *   @brief PMM Register Layer Header File
 *   @date 11-Dec-2018
 *   @version 04.07.01
 *
 *   This file contains:
 *   - Definitions
 *   - Types
 *   .
 *   which are relevant for the PMM driver.
 */

/*
 * Copyright (C) 2009-2018 Texas Instruments Incorporated - www.ti.com
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __REG_PMM_H__
#define __REG_PMM_H__

#include "sys_common.h"

/* USER CODE BEGIN (0) */
/* USER CODE END */

/* Pmm Register Frame Definition */
/** @struct pmmBase
 *   @brief Pmm Register Frame Definition
 *
 *   This type is used to access the Pmm Registers.
 */
/** @typedef pmmBase_t
 *   @brief Pmm Register Frame Type Definition
 *
 *   This type is used to access the Pmm Registers.
 */
typedef volatile struct pmmBase
{
    uint32 LOGICPDPWRCTRL0;      /**< 0x0000: Logic Power Domain Control Register 0 */
    uint32 LOGICPDPWRCTRL1;      /**< 0x0000: Logic Power Domain Control Register 1 */
    uint32 rsvd1[ 6U ];          /**< 0x0008 - 0x001C: Reserved*/
    uint32 PDCLKDIS;             /**< 0x0020: Power Domain Clock Disable Register */
    uint32 PDCLKDISSET;          /**< 0x0024: Power Domain Clock Disable Set Register */
    uint32 PDCLKDISCLR;          /**< 0x0028: Power Domain Clock Disable Clear Register */
    uint32 rsvd2[ 5U ];          /**< 0x002C - 0x003C: Reserved */
    uint32 LOGICPDPWRSTAT[ 5U ]; /**< 0x0040 - 0x0050: Logic Power Domain Power Status
                                    Register
                                        - 0: PD2
                                        - 1: PD3
                                        - 2: PD4
                                        - 3: PD5
                                        - 4: PD6 */
    uint32 rsvd3[ 19U ];         /**< 0x0054 - 0x009F: Reserved*/
    uint32 GLOBALCTRL1;          /**< 0x00A0: Global Control Register 1 */
    uint32 rsvd4;                /**< 0x00A4: Reserved */
    uint32 GLOBALSTAT;           /**< 0x00A8: Global Status Register */
    uint32 PRCKEYREG;            /**< 0x00AC: PSCON Diagnostic Compare Key Register */
    uint32 LPDDCSTAT1;  /**< 0x00B0: LogicPD PSCON Diagnostic Compare Status Register 1 */
    uint32 LPDDCSTAT2;  /**< 0x00B4: LogicPD PSCON Diagnostic Compare Status Register 2 */
    uint32 rsvd5;       /**< 0x00B8: Reserved */
    uint32 rsvd6;       /**< 0x00BC: Reserved */
    uint32 ISODIAGSTAT; /**< 0x00C0: Isolation Diagnostic Status Register */
} pmmBase_t;

/** @def pmmREG
 *   @brief Pmm Register Frame Pointer
 *
 *   This pointer is used by the Pmm driver to access the Pmm registers.
 */
#define pmmREG ( ( pmmBase_t * ) 0xFFFF0000U )

/* USER CODE BEGIN (1) */
/* USER CODE END */

#endif
