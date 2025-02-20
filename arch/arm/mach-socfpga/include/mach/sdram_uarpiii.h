/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015-2017 Intel Corporation <www.intel.com>
 */

#ifndef _SOCFPGA_SDRAM_UARPIII_H_
#define _SOCFPGA_SDRAM_UARPIII_H_

#ifndef __ASSEMBLY__
#include <linux/bitops.h>
int ddr_calibration_sequence(void);

struct socfpga_ecc_hmc {
	u32 ip_rev_id;
	u32 _pad_0x4_0x7;
	u32 ddrioctrl;
	u32 ddrcalstat;
	u32 mpr_0beat1;
	u32 mpr_1beat1;
	u32 mpr_2beat1;
	u32 mpr_3beat1;
	u32 mpr_4beat1;
	u32 mpr_5beat1;
	u32 mpr_6beat1;
	u32 mpr_7beat1;
	u32 mpr_8beat1;
	u32 mpr_0beat2;
	u32 mpr_1beat2;
	u32 mpr_2beat2;
	u32 mpr_3beat2;
	u32 mpr_4beat2;
	u32 mpr_5beat2;
	u32 mpr_6beat2;
	u32 mpr_7beat2;
	u32 mpr_8beat2;
	u32 _pad_0x58_0x5f[2];
	u32 auto_precharge;
	u32 _pad_0x64_0xff[39];
	u32 eccctrl;
	u32 eccctrl2;
	u32 _pad_0x108_0x10f[2];
	u32 errinten;
	u32 errintens;
	u32 errintenr;
	u32 intmode;
	u32 intstat;
	u32 diaginttest;
	u32 modstat;
	u32 derraddra;
	u32 serraddra;
	u32 _pad_0x134_0x137;
	u32 autowb_corraddr;
	u32 serrcntreg;
	u32 autowb_drop_cntreg;
	u32 _pad_0x144_0x147;
	u32 ecc_reg2wreccdatabus;
	u32 ecc_rdeccdata2regbus;
	u32 ecc_reg2rdeccdatabus;
	u32 _pad_0x154_0x15f[3];
	u32 ecc_diagon;
	u32 ecc_decstat;
	u32 _pad_0x168_0x16f[2];
	u32 ecc_errgenaddr_0;
	u32 ecc_errgenaddr_1;
	u32 ecc_errgenaddr_2;
	u32 ecc_errgenaddr_3;
};

struct socfpga_noc_ddr_scheduler {
	u32 ddr_t_main_scheduler_id_coreid;
	u32 ddr_t_main_scheduler_id_revisionid;
	u32 ddr_t_main_scheduler_ddrconf;
	u32 ddr_t_main_scheduler_ddrtiming;
	u32 ddr_t_main_scheduler_ddrmode;
	u32 ddr_t_main_scheduler_readlatency;
	u32 _pad_0x20_0x34[8];
	u32 ddr_t_main_scheduler_activate;
	u32 ddr_t_main_scheduler_devtodev;
};

/*
 * OCRAM firewall
 */
struct socfpga_noc_fw_ocram {
	u32 enable;
	u32 enable_set;
	u32 enable_clear;
	u32 region0;
	u32 region1;
	u32 region2;
	u32 region3;
	u32 region4;
	u32 region5;
};

/* for master such as MPU and FPGA */
struct socfpga_noc_fw_ddr_mpu_fpga2sdram {
	u32 enable;
	u32 enable_set;
	u32 enable_clear;
	u32 _pad_0xc_0xf;
	u32 mpuregion0addr;
	u32 mpuregion1addr;
	u32 mpuregion2addr;
	u32 mpuregion3addr;
	u32 fpga2sdram0region0addr;
	u32 fpga2sdram0region1addr;
	u32 fpga2sdram0region2addr;
	u32 fpga2sdram0region3addr;
	u32 fpga2sdram1region0addr;
	u32 fpga2sdram1region1addr;
	u32 fpga2sdram1region2addr;
	u32 fpga2sdram1region3addr;
	u32 fpga2sdram2region0addr;
	u32 fpga2sdram2region1addr;
	u32 fpga2sdram2region2addr;
	u32 fpga2sdram2region3addr;
};

/* for L3 master */
struct socfpga_noc_fw_ddr_l3 {
	u32 enable;
	u32 enable_set;
	u32 enable_clear;
	u32 hpsregion0addr;
	u32 hpsregion1addr;
	u32 hpsregion2addr;
	u32 hpsregion3addr;
	u32 hpsregion4addr;
	u32 hpsregion5addr;
	u32 hpsregion6addr;
	u32 hpsregion7addr;
};

struct socfpga_io48_mmr {
	u32 dbgcfg0;
	u32 dbgcfg1;
	u32 dbgcfg2;
	u32 dbgcfg3;
	u32 dbgcfg4;
	u32 dbgcfg5;
	u32 dbgcfg6;
	u32 reserve0;
	u32 reserve1;
	u32 reserve2;
	u32 ctrlcfg0;
	u32 ctrlcfg1;
	u32 ctrlcfg2;
	u32 ctrlcfg3;
	u32 ctrlcfg4;
	u32 ctrlcfg5;
	u32 ctrlcfg6;
	u32 ctrlcfg7;
	u32 ctrlcfg8;
	u32 ctrlcfg9;
	u32 dramtiming0;
	u32 dramodt0;
	u32 dramodt1;
	u32 sbcfg0;
	u32 sbcfg1;
	u32 sbcfg2;
	u32 sbcfg3;
	u32 sbcfg4;
	u32 sbcfg5;
	u32 sbcfg6;
	u32 sbcfg7;
	u32 caltiming0;
	u32 caltiming1;
	u32 caltiming2;
	u32 caltiming3;
	u32 caltiming4;
	u32 caltiming5;
	u32 caltiming6;
	u32 caltiming7;
	u32 caltiming8;
	u32 caltiming9;
	u32 caltiming10;
	u32 dramaddrw;
	u32 sideband0;
	u32 sideband1;
	u32 sideband2;
	u32 sideband3;
	u32 sideband4;
	u32 sideband5;
	u32 sideband6;
	u32 sideband7;
	u32 sideband8;
	u32 sideband9;
	u32 sideband10;
	u32 sideband11;
	u32 sideband12;
	u32 sideband13;
	u32 sideband14;
	u32 sideband15;
	u32 dramsts;
	u32 dbgdone;
	u32 dbgsignals;
	u32 dbgreset;
	u32 dbgmatch;
	u32 counter0mask;
	u32 counter1mask;
	u32 counter0match;
	u32 counter1match;
	u32 niosreserve0;
	u32 niosreserve1;
	u32 niosreserve2;
};

#endif /*__ASSEMBLY__ */

#define IO48_MMR_CTRLCFG0_DB2_BURST_LENGTH_MASK		0x1F000000
#define IO48_MMR_CTRLCFG0_DB2_BURST_LENGTH_SHIFT	24
#define IO48_MMR_CTRLCFG0_DB1_BURST_LENGTH_MASK		0x00F80000
#define IO48_MMR_CTRLCFG0_DB1_BURST_LENGTH_SHIFT	19
#define IO48_MMR_CTRLCFG0_DB0_BURST_LENGTH_MASK		0x0007C000
#define IO48_MMR_CTRLCFG0_DB0_BURST_LENGTH_SHIFT	14
#define IO48_MMR_CTRLCFG0_CTRL_BURST_LENGTH_MASK	0x00003E00
#define IO48_MMR_CTRLCFG0_CTRL_BURST_LENGTH_SHIFT	9
#define IO48_MMR_CTRLCFG0_AC_POS_MASK			0x00000180
#define IO48_MMR_CTRLCFG0_AC_POS_SHIFT			7
#define IO48_MMR_CTRLCFG0_DIMM_TYPE_MASK		0x00000070
#define IO48_MMR_CTRLCFG0_DIM_TYPE_SHIFT		4
#define IO48_MMR_CTRLCFG0_MEM_TYPE_MASK			0x0000000F
#define IO48_MMR_CTRLCFG0_MEM_TYPE_SHIFT		0

#define IO48_MMR_CTRLCFG1_DBC3_ENABLE_DM		BIT(30)
#define IO48_MMR_CTRLCFG1_DBC2_ENABLE_DM		BIT(29)
#define IO48_MMR_CTRLCFG1_DBC1_ENABLE_DM		BIT(28)
#define IO48_MMR_CTRLCFG1_DBC0_ENABLE_DM		BIT(27)
#define IO48_MMR_CTRLCFG1_CTRL_ENABLE_DM		BIT(26)
#define IO48_MMR_CTRLCFG1_DQSTRK_EN			BIT(25)
#define IO48_MMR_CTRLCFG1_STARVE_LIMIT_MASK		0x01F80000
#define IO48_MMR_CTRLCFG1_STARVE_LIMIT_SHIFT		19
#define IO48_MMR_CTRLCFG1_REORDER_READ			BIT(18)
#define IO48_MMR_CTRLCFG1_DBC3_REORDER_RDATA		BIT(17)
#define IO48_MMR_CTRLCFG1_DBC2_REORDER_RDATA		BIT(16)
#define IO48_MMR_CTRLCFG1_DBC1_REORDER_RDATA		BIT(15)
#define IO48_MMR_CTRLCFG1_DBC0_REORDER_RDATA		BIT(14)
#define IO48_MMR_CTRLCFG1_CTRL_REORDER_RDATA		BIT(13)
#define IO48_MMR_CTRLCFG1_REORDER_DATA			BIT(12)
#define IO48_MMR_CTRLCFG1_DBC3_ENABLE_ECC		BIT(11)
#define IO48_MMR_CTRLCFG1_DBC2_ENABLE_ECC		BIT(10)
#define IO48_MMR_CTRLCFG1_DBC1_ENABLE_ECC		BIT(9)
#define IO48_MMR_CTRLCFG1_DBC0_ENABLE_ECC		BIT(8)
#define IO48_MMR_CTRLCFG1_CTRL_ENABLE_ECC		BIT(7)
#define IO48_MMR_CTRLCFG1_ADDR_ORDER_MASK		0x00000060
#define IO48_MMR_CTRLCFG1_ADDR_ORDER_SHIFT		5
#define IO48_MMR_CTRLCFG1_DBC3_BURST_LENGTH_MASK	0x0000001F
#define IO48_MMR_CTRLCFG1_DBC3_BURST_LENGTH_SHIFT	0

#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_DIFF_BG_MASK		0x3F000000
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_DIFF_BG_SHIFT	24
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_DIFF_BANK_MASK	0x00FC0000
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_DIFF_BANK_SHIFT	18
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_MASK			0x0003F000
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_ACT_SHIFT		12
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_PCH_MASK			0x00000FC0
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_PCH_SHIFT		6
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_RDWR_MASK		0x0000003F
#define IO48_MMR_CALTIMING0_CFG_ACT_TO_RDWR_SHIFT		0

#define IO48_MMR_CALTIMING1_CFG_RD_TO_WR_DIFF_CHIP_MASK		0x3F000000
#define IO48_MMR_CALTIMING1_CFG_RD_TO_WR_DIFF_CHIP_SHIFT	24
#define IO48_MMR_CALTIMING1_CFG_RD_TO_WR_MASK			0x00FC0000
#define IO48_MMR_CALTIMING1_CFG_RD_TO_WR_SHIFT			18
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_DB_MASK		0x0003F000
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_DB_SHIFT		12
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_DC_MASK		0x00000FC0
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_DC_SHIFT		6
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_MASK			0x0000003F
#define IO48_MMR_CALTIMING1_CFG_RD_TO_RD_SHIFT			0

#define IO48_MMR_CALTIMING2_CFG_WR_TO_WR_DIFF_CHIP_MASK		0x3F000000
#define IO48_MMR_CALTIMING2_CFG_WR_TO_WR_DIFF_CHIP_SHIFT	24
#define IO48_MMR_CALTIMING2_CFG_WR_TO_WR_MASK			0x00FC0000
#define IO48_MMR_CALTIMING2_CFG_WR_TO_WR_SHIFT			18
#define IO48_MMR_CALTIMING2_CFG_RD_TO_AP_VALID_MASK		0x0003F000
#define IO48_MMR_CALTIMING2_CFG_RD_TO_AP_VALID_SHIFT		12
#define IO48_MMR_CALTIMING2_CFG_RD_TO_PCH_MASK			0x00000FC0
#define IO48_MMR_CALTIMING2_CFG_RD_TO_PCH_SHIFT			6
#define IO48_MMR_CALTIMING2_CFG_RD_TO_WR_DIFF_BG_MASK		0x0000003F
#define IO48_MMR_CALTIMING2_CFG_RD_TO_WR_DIFF_BG_SHIFT		0

#define IO48_MMR_CALTIMING3_CFG_WR_TO_PCH_MASK			0x3F000000
#define IO48_MMR_CALTIMING3_CFG_WR_TO_PCH_SHIFT			24
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_DIFF_BG_MASK		0x00FC0000
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_DIFF_BG_SHIFT		18
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_DIFF_CHIP_MASK		0x0003F000
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_DIFF_CHIP_SHIFT	12
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_MASK			0x00000FC0
#define IO48_MMR_CALTIMING3_CFG_WR_TO_RD_SHIFT			6
#define IO48_MMR_CALTIMING3_CFG_WR_TO_WR_DIFF_BG_MASK		0x0000003F
#define IO48_MMR_CALTIMING3_CFG_WR_TO_WR_DIFF_BG_SHIFT		0

#define IO48_MMR_CALTIMING4_CFG_PDN_TO_VALID_MASK		0xFC000000
#define IO48_MMR_CALTIMING4_CFG_PDN_TO_VALID_SHIFT		26
#define IO48_MMR_CALTIMING4_CFG_ARF_TO_VALID_MASK		0x03FC0000
#define IO48_MMR_CALTIMING4_CFG_ARF_TO_VALID_SHIFT		18
#define IO48_MMR_CALTIMING4_CFG_PCH_ALL_TO_VALID_MASK		0x0003F000
#define IO48_MMR_CALTIMING4_CFG_PCH_ALL_TO_VALID_SHIFT		12
#define IO48_MMR_CALTIMING4_CFG_PCH_TO_VALID_MASK		0x00000FC0
#define IO48_MMR_CALTIMING4_CFG_PCH_TO_VALID_SHIFT		6
#define IO48_MMR_CALTIMING4_CFG_WR_AP_TO_VALID_MASK		0x0000003F
#define IO48_MMR_CALTIMING4_CFG_WR_AP_TO_VALID_SHIFT		0

#define IO48_MMR_CALTIMING9_CFG_WR_4_ACT_TO_ACT_MASK		0x000000FF
#define IO48_MMR_CALTIMING9_CFG_WR_4_ACT_TO_ACT_SHIFT		0

#define IO48_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_MASK		0x00070000
#define IO48_MMR_DRAMADDRW_CFG_CS_ADDR_WIDTH_SHIFT		16
#define IO48_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_MASK	0x0000C000
#define IO48_MMR_DRAMADDRW_CFG_BANK_GROUP_ADDR_WIDTH_SHIFT	14
#define IO48_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_MASK		0x00003C00
#define IO48_MMR_DRAMADDRW_CFG_BANK_ADDR_WIDTH_SHIFT		10
#define IO48_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_MASK		0x000003E0
#define IO48_MMR_DRAMADDRW_CFG_ROW_ADDR_WIDTH_SHIFT		5
#define IO48_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_MASK		0x0000001F
#define IO48_MMR_DRAMADDRW_CFG_COL_ADDR_WIDTH_SHIFT		0

#define ALT_ECC_HMC_OCP_DDRIOCTRL_IO_SIZE_MSK		0x00000003

#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_SET_MSK	BIT(0)
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_SET_MSK	BIT(1)
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_SET_MSK	BIT(0)
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_SET_MSK	BIT(1)
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_SET_MSK		BIT(16)
#define ALT_ECC_HMC_OCP_ECCCTL_AWB_CNT_RST_SET_MSK	BIT(16)
#define ALT_ECC_HMC_OCP_ECCCTL_CNT_RST_SET_MSK		BIT(8)
#define ALT_ECC_HMC_OCP_ECCCTL_ECC_EN_SET_MSK		BIT(0)
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_SET_MSK		BIT(8)
#define ALT_ECC_HMC_OCP_ECCCTL2_AWB_EN_SET_MSK		BIT(0)

#define ALT_ECC_HMC_OCP_SERRCNTREG_VALUE		8

#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_ACTTOACT_LSB	28
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOMISS_LSB	0
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTOMISS_LSB	0
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BURSTLEN_LSB	2
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_RDTOWR_LSB	5
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_WRTORD_LSB	18
#define ALT_NOC_MPU_DDR_T_SCHED_DDRTIMING_BWRATIO_LSB	0

#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_AUTOPRECHARGE_LSB	0
#define ALT_NOC_MPU_DDR_T_SCHED_DDRMOD_BWRATIOEXTENDED_LSB	0

#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_RRD_LSB	3
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAW_LSB	13
#define ALT_NOC_MPU_DDR_T_SCHED_ACTIVATE_FAWBANK_LSB	4

#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTORD_LSB	4
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSRDTOWR_LSB	5
#define ALT_NOC_MPU_DDR_T_SCHED_DEVTODEV_BUSWRTORD_LSB	7

#define ALT_NOC_FW_DDR_END_ADDR_LSB	16
#define ALT_NOC_FW_DDR_ADDR_MASK	0xFFFF
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG0EN_SET_MSK		BIT(0)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG1EN_SET_MSK		BIT(1)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG2EN_SET_MSK		BIT(2)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG3EN_SET_MSK		BIT(3)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG4EN_SET_MSK		BIT(4)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG5EN_SET_MSK		BIT(5)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG6EN_SET_MSK		BIT(6)
#define ALT_NOC_FW_DDR_SCR_EN_HPSREG7EN_SET_MSK		BIT(7)
#define ALT_NOC_FW_DDR_SCR_EN_MPUREG0EN_SET_MSK		BIT(0)
#define ALT_NOC_FW_DDR_SCR_EN_MPUREG1EN_SET_MSK		BIT(1)
#define ALT_NOC_FW_DDR_SCR_EN_MPUREG2EN_SET_MSK		BIT(2)
#define ALT_NOC_FW_DDR_SCR_EN_MPUREG3EN_SET_MSK		BIT(3)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR0REG0EN_SET_MSK	BIT(4)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR0REG1EN_SET_MSK	BIT(5)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR0REG2EN_SET_MSK	BIT(6)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR0REG3EN_SET_MSK	BIT(7)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR1REG0EN_SET_MSK	BIT(8)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR1REG1EN_SET_MSK	BIT(9)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR1REG2EN_SET_MSK	BIT(10)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR1REG3EN_SET_MSK	BIT(11)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR2REG0EN_SET_MSK	BIT(12)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR2REG1EN_SET_MSK	BIT(13)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR2REG2EN_SET_MSK	BIT(14)
#define ALT_NOC_FW_DDR_SCR_EN_F2SDR2REG3EN_SET_MSK	BIT(15)

#define ALT_IO48_DRAMTIME_MEM_READ_LATENCY_MASK		0x0000003F
#endif /* _SOCFPGA_SDRAM_UARPIII_H_ */
