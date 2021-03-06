/*
 * Copyright 2014 Freescale Semiconductor, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __FSL_NS_ACCESS_H_
#define __FSL_NS_ACCESS_H_

enum csu_cslx_access {
	CSU_NS_SUP_R = 0x08,
	CSU_NS_SUP_W = 0x80,
	CSU_NS_SUP_RW = 0x88,
	CSU_NS_USER_R = 0x04,
	CSU_NS_USER_W = 0x40,
	CSU_NS_USER_RW = 0x44,
	CSU_S_SUP_R = 0x02,
	CSU_S_SUP_W = 0x20,
	CSU_S_SUP_RW = 0x22,
	CSU_S_USER_R = 0x01,
	CSU_S_USER_W = 0x10,
	CSU_S_USER_RW = 0x11,
	CSU_ALL_RW = 0xff,
};

enum csu_cslx_ind {
	CSU_CSLX_PCIE2_IO = 0,
	CSU_CSLX_PCIE1_IO,
	CSU_CSLX_MG2TPR_IP,
	CSU_CSLX_IFC_MEM,
	CSU_CSLX_OCRAM,
	CSU_CSLX_GIC,
	CSU_CSLX_PCIE1,
	CSU_CSLX_OCRAM2,
	CSU_CSLX_QSPI_MEM,
	CSU_CSLX_PCIE2,
	CSU_CSLX_SATA,
	CSU_CSLX_USB3,
	CSU_CSLX_SERDES = 32,
	CSU_CSLX_QDMA,
	CSU_CSLX_LPUART2,
	CSU_CSLX_LPUART1,
	CSU_CSLX_LPUART4,
	CSU_CSLX_LPUART3,
	CSU_CSLX_LPUART6,
	CSU_CSLX_LPUART5,
	CSU_CSLX_DSPI2 = 40,
	CSU_CSLX_DSPI1,
	CSU_CSLX_QSPI,
	CSU_CSLX_ESDHC,
	CSU_CSLX_2D_ACE,
	CSU_CSLX_IFC,
	CSU_CSLX_I2C1,
	CSU_CSLX_USB2,
	CSU_CSLX_I2C3,
	CSU_CSLX_I2C2,
	CSU_CSLX_DUART2 = 50,
	CSU_CSLX_DUART1,
	CSU_CSLX_WDT2,
	CSU_CSLX_WDT1,
	CSU_CSLX_EDMA,
	CSU_CSLX_SYS_CNT,
	CSU_CSLX_DMA_MUX2,
	CSU_CSLX_DMA_MUX1,
	CSU_CSLX_DDR,
	CSU_CSLX_QUICC,
	CSU_CSLX_DCFG_CCU_RCPM = 60,
	CSU_CSLX_SECURE_BOOTROM,
	CSU_CSLX_SFP,
	CSU_CSLX_TMU,
	CSU_CSLX_SECURE_MONITOR,
	CSU_CSLX_RESERVED0,
	CSU_CSLX_ETSEC1,
	CSU_CSLX_SEC5_5,
	CSU_CSLX_ETSEC3,
	CSU_CSLX_ETSEC2,
	CSU_CSLX_GPIO2 = 70,
	CSU_CSLX_GPIO1,
	CSU_CSLX_GPIO4,
	CSU_CSLX_GPIO3,
	CSU_CSLX_PLATFORM_CONT,
	CSU_CSLX_CSU,
	CSU_CSLX_ASRC,
	CSU_CSLX_SPDIF,
	CSU_CSLX_FLEXCAN2,
	CSU_CSLX_FLEXCAN1,
	CSU_CSLX_FLEXCAN4 = 80,
	CSU_CSLX_FLEXCAN3,
	CSU_CSLX_SAI2,
	CSU_CSLX_SAI1,
	CSU_CSLX_SAI4,
	CSU_CSLX_SAI3,
	CSU_CSLX_FTM2,
	CSU_CSLX_FTM1,
	CSU_CSLX_FTM4,
	CSU_CSLX_FTM3,
	CSU_CSLX_FTM6 = 90,
	CSU_CSLX_FTM5,
	CSU_CSLX_FTM8,
	CSU_CSLX_FTM7,
	CSU_CSLX_COP_DCSR,
	CSU_CSLX_EPU,
	CSU_CSLX_GDI,
	CSU_CSLX_DDI,
	CSU_CSLX_RESERVED1,
	CSU_CSLX_USB3_PHY = 117,
	CSU_CSLX_RESERVED2,
	CSU_CSLX_MAX,
};

struct csu_ns_dev {
	unsigned long ind;
	uint32_t val;
};

void enable_devices_ns_access(struct csu_ns_dev *ns_dev, uint32_t num);

#endif
