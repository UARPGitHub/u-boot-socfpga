/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/*
 * Copyright (C) 2022 Intel Corporation <www.intel.com>
 *
 */
/*
 * Altera SoCFPGA SDRAM configuration
 *
 */

#ifndef __SOCFPGA_SDRAM_CONFIG_H__
#define __SOCFPGA_SDRAM_CONFIG_H__

/* SDRAM configuration */
#define CFG_HPS_SDR_CTRLCFG_CPORTRDWR_CPORTRDWR		0x5A56A
#define CFG_HPS_SDR_CTRLCFG_CPORTRMAP_CPORTRMAP		0xB00088
#define CFG_HPS_SDR_CTRLCFG_CPORTWIDTH_CPORTWIDTH		0x44555
#define CFG_HPS_SDR_CTRLCFG_CPORTWMAP_CPORTWMAP		0x2C011000
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_ADDRORDER		0
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_DQSTRKEN			0
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_ECCCORREN		0
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_ECCEN			0
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_MEMBL			8
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_MEMTYPE			2
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_NODMPINS			0
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_REORDEREN		1
#define CFG_HPS_SDR_CTRLCFG_CTRLCFG_STARVELIMIT		10
#define CFG_HPS_SDR_CTRLCFG_CTRLWIDTH_CTRLWIDTH		2
#define CFG_HPS_SDR_CTRLCFG_DRAMADDRW_BANKBITS		3
#define CFG_HPS_SDR_CTRLCFG_DRAMADDRW_COLBITS		10
#define CFG_HPS_SDR_CTRLCFG_DRAMADDRW_CSBITS			1
#define CFG_HPS_SDR_CTRLCFG_DRAMADDRW_ROWBITS		15
#define CFG_HPS_SDR_CTRLCFG_DRAMDEVWIDTH_DEVWIDTH		8
#define CFG_HPS_SDR_CTRLCFG_DRAMIFWIDTH_IFWIDTH		32
#define CFG_HPS_SDR_CTRLCFG_DRAMINTR_INTREN			0
#define CFG_HPS_SDR_CTRLCFG_DRAMODT_READ			0
#define CFG_HPS_SDR_CTRLCFG_DRAMODT_WRITE			1
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_AL			0
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_TCL			11
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_TCWL			8
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_TFAW			12
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_TRFC			104
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING1_TRRD			3
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING2_IF_TRCD		6
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING2_IF_TREFI		3120
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING2_IF_TRP		6
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING2_IF_TWR		6
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING2_IF_TWTR		4
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING3_TCCD			4
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING3_TMRD			4
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING3_TRAS			14
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING3_TRC			20
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING3_TRTP			3
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING4_PWRDOWNEXIT		3
#define CFG_HPS_SDR_CTRLCFG_DRAMTIMING4_SELFRFSHEXIT		512
#define CFG_HPS_SDR_CTRLCFG_EXTRATIME1_CFG_EXTRA_CTL_CLK_RD_TO_WR 2
#define CFG_HPS_SDR_CTRLCFG_EXTRATIME1_CFG_EXTRA_CTL_CLK_RD_TO_WR_BC 2
#define CFG_HPS_SDR_CTRLCFG_EXTRATIME1_CFG_EXTRA_CTL_CLK_RD_TO_WR_DIFF_CHIP 2
#define CFG_HPS_SDR_CTRLCFG_FIFOCFG_INCSYNC			0
#define CFG_HPS_SDR_CTRLCFG_FIFOCFG_SYNCMODE			0
#define CFG_HPS_SDR_CTRLCFG_FPGAPORTRST			0x333
#define CFG_HPS_SDR_CTRLCFG_LOWPWREQ_SELFRFSHMASK		3
#define CFG_HPS_SDR_CTRLCFG_LOWPWRTIMING_AUTOPDCYCLES	0
#define CFG_HPS_SDR_CTRLCFG_LOWPWRTIMING_CLKDISABLECYCLES	8
#define CFG_HPS_SDR_CTRLCFG_MPPACING_0_THRESHOLD1_31_0	0x20820820
#define CFG_HPS_SDR_CTRLCFG_MPPACING_1_THRESHOLD1_59_32	0x8208208
#define CFG_HPS_SDR_CTRLCFG_MPPACING_1_THRESHOLD2_3_0	0
#define CFG_HPS_SDR_CTRLCFG_MPPACING_2_THRESHOLD2_35_4	0x41041041
#define CFG_HPS_SDR_CTRLCFG_MPPACING_3_THRESHOLD2_59_36	0x410410
#define CFG_HPS_SDR_CTRLCFG_MPPRIORITY_USERPRIORITY		0x0
#define CFG_HPS_SDR_CTRLCFG_MPTHRESHOLDRST_0_THRESHOLDRSTCYCLES_31_0 0x01010101
#define CFG_HPS_SDR_CTRLCFG_MPTHRESHOLDRST_1_THRESHOLDRSTCYCLES_63_32 0x01010101
#define CFG_HPS_SDR_CTRLCFG_MPTHRESHOLDRST_2_THRESHOLDRSTCYCLES_79_64 0x0101
#define CFG_HPS_SDR_CTRLCFG_MPWIEIGHT_0_STATICWEIGHT_31_0	0x21084210
#define CFG_HPS_SDR_CTRLCFG_MPWIEIGHT_1_STATICWEIGHT_49_32	0x10441
#define CFG_HPS_SDR_CTRLCFG_MPWIEIGHT_1_SUMOFWEIGHT_13_0	0x78
#define CFG_HPS_SDR_CTRLCFG_MPWIEIGHT_2_SUMOFWEIGHT_45_14	0x0
#define CFG_HPS_SDR_CTRLCFG_MPWIEIGHT_3_SUMOFWEIGHT_63_46	0x0
#define CFG_HPS_SDR_CTRLCFG_PHYCTRL_PHYCTRL_0		0x200
#define CFG_HPS_SDR_CTRLCFG_PORTCFG_AUTOPCHEN		0
#define CFG_HPS_SDR_CTRLCFG_RFIFOCMAP_RFIFOCMAP		0x760210
#define CFG_HPS_SDR_CTRLCFG_STATICCFG_MEMBL			2
#define CFG_HPS_SDR_CTRLCFG_STATICCFG_USEECCASDATA		0
#define CFG_HPS_SDR_CTRLCFG_WFIFOCMAP_WFIFOCMAP		0x980543

/* Sequencer auto configuration */
#define RW_MGR_ACTIVATE_0_AND_1	0x0D
#define RW_MGR_ACTIVATE_0_AND_1_WAIT1	0x0E
#define RW_MGR_ACTIVATE_0_AND_1_WAIT2	0x10
#define RW_MGR_ACTIVATE_1	0x0F
#define RW_MGR_CLEAR_DQS_ENABLE	0x49
#define RW_MGR_GUARANTEED_READ	0x4C
#define RW_MGR_GUARANTEED_READ_CONT	0x54
#define RW_MGR_GUARANTEED_WRITE	0x18
#define RW_MGR_GUARANTEED_WRITE_WAIT0	0x1B
#define RW_MGR_GUARANTEED_WRITE_WAIT1	0x1F
#define RW_MGR_GUARANTEED_WRITE_WAIT2	0x19
#define RW_MGR_GUARANTEED_WRITE_WAIT3	0x1D
#define RW_MGR_IDLE	0x00
#define RW_MGR_IDLE_LOOP1	0x7B
#define RW_MGR_IDLE_LOOP2	0x7A
#define RW_MGR_INIT_RESET_0_CKE_0	0x6F
#define RW_MGR_INIT_RESET_1_CKE_0	0x74
#define RW_MGR_LFSR_WR_RD_BANK_0	0x22
#define RW_MGR_LFSR_WR_RD_BANK_0_DATA	0x25
#define RW_MGR_LFSR_WR_RD_BANK_0_DQS	0x24
#define RW_MGR_LFSR_WR_RD_BANK_0_NOP	0x23
#define RW_MGR_LFSR_WR_RD_BANK_0_WAIT	0x32
#define RW_MGR_LFSR_WR_RD_BANK_0_WL_1	0x21
#define RW_MGR_LFSR_WR_RD_DM_BANK_0	0x36
#define RW_MGR_LFSR_WR_RD_DM_BANK_0_DATA	0x39
#define RW_MGR_LFSR_WR_RD_DM_BANK_0_DQS	0x38
#define RW_MGR_LFSR_WR_RD_DM_BANK_0_NOP	0x37
#define RW_MGR_LFSR_WR_RD_DM_BANK_0_WAIT	0x46
#define RW_MGR_LFSR_WR_RD_DM_BANK_0_WL_1	0x35
#define RW_MGR_MRS0_DLL_RESET	0x02
#define RW_MGR_MRS0_DLL_RESET_MIRR	0x08
#define RW_MGR_MRS0_USER	0x07
#define RW_MGR_MRS0_USER_MIRR	0x0C
#define RW_MGR_MRS1	0x03
#define RW_MGR_MRS1_MIRR	0x09
#define RW_MGR_MRS2	0x04
#define RW_MGR_MRS2_MIRR	0x0A
#define RW_MGR_MRS3	0x05
#define RW_MGR_MRS3_MIRR	0x0B
#define RW_MGR_PRECHARGE_ALL	0x12
#define RW_MGR_READ_B2B	0x59
#define RW_MGR_READ_B2B_WAIT1	0x61
#define RW_MGR_READ_B2B_WAIT2	0x6B
#define RW_MGR_REFRESH_ALL	0x14
#define RW_MGR_RETURN	0x01
#define RW_MGR_SGLE_READ	0x7D
#define RW_MGR_ZQCL	0x06

/* Sequencer defines configuration */
#define AFI_CLK_FREQ	401
#define AFI_RATE_RATIO	1
#define CALIB_LFIFO_OFFSET	12
#define CALIB_VFIFO_OFFSET	10
#define ENABLE_SUPER_QUICK_CALIBRATION	0
#define IO_DELAY_PER_DCHAIN_TAP	25
#define IO_DELAY_PER_DQS_EN_DCHAIN_TAP	25
#define IO_DELAY_PER_OPA_TAP	312
#define IO_DLL_CHAIN_LENGTH	8
#define IO_DQDQS_OUT_PHASE_MAX	0
#define IO_DQS_EN_DELAY_MAX	31
#define IO_DQS_EN_DELAY_OFFSET	0
#define IO_DQS_EN_PHASE_MAX	7
#define IO_DQS_IN_DELAY_MAX	31
#define IO_DQS_IN_RESERVE	4
#define IO_DQS_OUT_RESERVE	4
#define IO_IO_IN_DELAY_MAX	31
#define IO_IO_OUT1_DELAY_MAX	31
#define IO_IO_OUT2_DELAY_MAX	0
#define IO_SHIFT_DQS_EN_WHEN_SHIFT_DQS	0
#define MAX_LATENCY_COUNT_WIDTH	5
#define READ_VALID_FIFO_SIZE	16
#define REG_FILE_INIT_SEQ_SIGNATURE	0x555504dd
#define RW_MGR_MEM_ADDRESS_MIRRORING	0
#define RW_MGR_MEM_DATA_MASK_WIDTH	4
#define RW_MGR_MEM_DATA_WIDTH	32
#define RW_MGR_MEM_DQ_PER_READ_DQS	8
#define RW_MGR_MEM_DQ_PER_WRITE_DQS	8
#define RW_MGR_MEM_IF_READ_DQS_WIDTH	4
#define RW_MGR_MEM_IF_WRITE_DQS_WIDTH	4
#define RW_MGR_MEM_NUMBER_OF_CS_PER_DIMM	1
#define RW_MGR_MEM_NUMBER_OF_RANKS	1
#define RW_MGR_MEM_VIRTUAL_GROUPS_PER_READ_DQS	1
#define RW_MGR_MEM_VIRTUAL_GROUPS_PER_WRITE_DQS	1
#define RW_MGR_TRUE_MEM_DATA_MASK_WIDTH	4
#define TINIT_CNTR0_VAL	99
#define TINIT_CNTR1_VAL	32
#define TINIT_CNTR2_VAL	32
#define TRESET_CNTR0_VAL	99
#define TRESET_CNTR1_VAL	99
#define TRESET_CNTR2_VAL	10

/* Sequencer ac_rom_init configuration */
const u32 ac_rom_init[] = {
	0x20700000,
	0x20780000,
	0x10080471,
	0x10080570,
	0x10090006,
	0x100a0218,
	0x100b0000,
	0x10380400,
	0x10080469,
	0x100804e8,
	0x100a0006,
	0x10090218,
	0x100b0000,
	0x30780000,
	0x38780000,
	0x30780000,
	0x10680000,
	0x106b0000,
	0x10280400,
	0x10480000,
	0x1c980000,
	0x1c9b0000,
	0x1c980008,
	0x1c9b0008,
	0x38f80000,
	0x3cf80000,
	0x38780000,
	0x18180000,
	0x18980000,
	0x13580000,
	0x135b0000,
	0x13580008,
	0x135b0008,
	0x33780000,
	0x10580008,
	0x10780000
};

/* Sequencer inst_rom_init configuration */
const u32 inst_rom_init[] = {
	0x80000,
	0x80680,
	0x8180,
	0x8200,
	0x8280,
	0x8300,
	0x8380,
	0x8100,
	0x8480,
	0x8500,
	0x8580,
	0x8600,
	0x8400,
	0x800,
	0x8680,
	0x880,
	0xa680,
	0x80680,
	0x900,
	0x80680,
	0x980,
	0xa680,
	0x8680,
	0x80680,
	0xb68,
	0xcce8,
	0xae8,
	0x8ce8,
	0xb88,
	0xec88,
	0xa08,
	0xac88,
	0x80680,
	0xce00,
	0xcd80,
	0xe700,
	0xc00,
	0x20ce0,
	0x20ce0,
	0x20ce0,
	0x20ce0,
	0xd00,
	0x680,
	0x680,
	0x680,
	0x680,
	0x60e80,
	0x61080,
	0x61080,
	0x61080,
	0xa680,
	0x8680,
	0x80680,
	0xce00,
	0xcd80,
	0xe700,
	0xc00,
	0x30ce0,
	0x30ce0,
	0x30ce0,
	0x30ce0,
	0xd00,
	0x680,
	0x680,
	0x680,
	0x680,
	0x70e80,
	0x71080,
	0x71080,
	0x71080,
	0xa680,
	0x8680,
	0x80680,
	0x1158,
	0x6d8,
	0x80680,
	0x1168,
	0x7e8,
	0x7e8,
	0x87e8,
	0x40fe8,
	0x410e8,
	0x410e8,
	0x410e8,
	0x1168,
	0x7e8,
	0x7e8,
	0xa7e8,
	0x80680,
	0x40e88,
	0x41088,
	0x41088,
	0x41088,
	0x40f68,
	0x410e8,
	0x410e8,
	0x410e8,
	0xa680,
	0x40fe8,
	0x410e8,
	0x410e8,
	0x410e8,
	0x41008,
	0x41088,
	0x41088,
	0x41088,
	0x1100,
	0xc680,
	0x8680,
	0xe680,
	0x80680,
	0x0,
	0x8000,
	0xa000,
	0xc000,
	0x80000,
	0x80,
	0x8080,
	0xa080,
	0xc080,
	0x80080,
	0x9180,
	0x8680,
	0xa680,
	0x80680,
	0x40f08,
	0x80680
};

#endif /* __SOCFPGA_SDRAM_CONFIG_H__ */
