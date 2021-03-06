#ifndef __GPIO_ARIES_H_
#define __GPIO_ARIES_H_

#define GPIO_LEVEL_LOW			0
#define GPIO_LEVEL_HIGH			1
#define GPIO_LEVEL_NONE			2
#define GPIO_INPUT			0
#define GPIO_OUTPUT			1
#define __NC__				S5PV210_GPC0(0)


#define GPIO_BT_RXD			S5PV210_GPA0(0)
#define GPIO_BT_RXD_AF			2

#define	GPIO_BT_TXD			S5PV210_GPA0(1)
#define GPIO_BT_TXD_AF			2

#define GPIO_BT_CTS			S5PV210_GPA0(2)
#define GPIO_BT_CTS_AF			2

#define GPIO_BT_RTS			S5PV210_GPA0(3)
#define GPIO_BT_RTS_AF			2

#define GPIO_MSENSE_nRST   	S5PV210_GPA0(6)

#define GPIO_MSENSE_nRST_REV02	S5PV210_GPA1(3)

#define GPIO_AP_RXD			S5PV210_GPA1(0)
#define GPIO_AP_RXD_AF			2

#define GPIO_AP_TXD			S5PV210_GPA1(1)
#define GPIO_AP_TXD_AF			2

#define GPIO_RST			__NC__

#define GPIO_MSENSE_SCL_28V		S5PV210_GPB(0)

#define GPIO_TOUCH_INT			S5PV210_GPB(1)
#define	GPIO_TOUCH_INT_AF		0xFF

#define GPIO_USB_SCL_28V		S5PV210_GPB(2)

#define GPIO_USB_SDA_28V		S5PV210_GPB(3)

#define GPIO_MSENSE_SDA_28V		S5PV210_GPB(4)

#define GPIO_WLAN_BT_EN	        S5PV210_GPB(5)

#define GPIO_AP_SCL_28V        S5PV210_GPB(6)

#define GPIO_AP_SDA_28V	    S5PV210_GPB(7)

#define OLED_ID					__NC__

#define GPIO_DISPLAY_CLK		S5PV210_GPC0(1)
#define GPIO_DISPLAY_CLK_AF	S3C_GPIO_SFN(1)

#define LCD_SDO					__NC__

#define GPIO_DISPLAY_SI    		S5PV210_GPC0(3)
#define GPIO_DISPLAY_SI_AF		S3C_GPIO_SFN(1)

#define GPIO_MLCD_RST			S5PV210_GPC0(4)
#define GPIO_MLCD_RST_AF		S3C_GPIO_SFN(1)

#define GPIO_VT_CAM_SDA_18V		__NC__

#define GPS_nRST				__NC__

#define GPIO_VT_CAM_SCL_18V		__NC__

#define GPS_EN					__NC__

#define GPIO_CAM_3M_nRST		S5PV210_GPD0(0)
#define GPIO_CAM_MEGA_nRST      S5PV210_GPD0(0)

#define GPIO_VIBTONE_PWM		__NC__

#define GPIO_PDA_ACTIVE			S5PV210_GPD0(2)

#define GPIO_BOOT_MODE			S5PV210_GPD0(3)

#define GPIO_AP_PMIC_SDA		S5PV210_GPD1(0)

#define GPIO_AP_PMIC_SCL		S5PV210_GPD1(1)

#define GPIO_TSP_SDA_28V		S5PV210_GPD1(4)
#define GPIO_TSP_SDA_28V_AF		2

#define GPIO_TSP_SCL_28V		S5PV210_GPD1(5)
#define GPIO_TSP_SCL_28V_AF		2

#define GPIO_CAM_PCLK			S5PV210_GPE0(0)
#define GPIO_CAM_PCLK_AF		2

#define GPIO_CAM_VSYNC			S5PV210_GPE0(1)
#define GPIO_CAM_VSYNC_AF		2

#define GPIO_CAM_HSYNC			S5PV210_GPE0(2)
#define GPIO_CAM_HSYNC_AF		2

#define GPIO_CAM_D0				S5PV210_GPE0(3)
#define GPIO_CAM_D0_AF			2

#define GPIO_CAM_D1				S5PV210_GPE0(4)
#define GPIO_CAM_D1_AF			2

#define GPIO_CAM_D2				S5PV210_GPE0(5)
#define GPIO_CAM_D2_AF			2

#define GPIO_CAM_D3				S5PV210_GPE0(6)
#define GPIO_CAM_D3_AF			2

#define GPIO_CAM_D4				S5PV210_GPE0(7)
#define GPIO_CAM_D4_AF			2

#define GPIO_CAM_D5				S5PV210_GPE1(0)
#define GPIO_CAM_D5_AF			2

#define GPIO_CAM_D6				S5PV210_GPE1(1)
#define GPIO_CAM_D6_AF			2

#define GPIO_CAM_D7				S5PV210_GPE1(2)
#define GPIO_CAM_D7_AF			2

#define GPIO_CAM_MCLK			S5PV210_GPE1(3)
#define GPIO_CAM_MCLK_AF		2

#define GPIO_CAM_3M_nSTBY		S5PV210_GPE1(4)

#define GPIO_DISPLAY_HSYNC		S5PV210_GPF0(0)
#define GPIO_DISPLAY_HSYNC_AF	2

#define GPIO_DISPLAY_VSYNC		S5PV210_GPF0(1)
#define GPIO_DISPLAY_VSYNC_AF	2

#define GPIO_DISPLAY_DE			S5PV210_GPF0(2)
#define GPIO_DISPLAY_DE_AF		2

#define GPIO_DISPLAY_PCLK		S5PV210_GPF0(3)
#define GPIO_DISPLAY_PCLK_AF	2

#define GPIO_LCD_D0				S5PV210_GPF0(4)
#define GPIO_LCD_D0_AF			2

#define GPIO_LCD_D1				S5PV210_GPF0(5)
#define GPIO_LCD_D1_AF			2

#define GPIO_LCD_D2				S5PV210_GPF0(6)
#define GPIO_LCD_D2_AF			2

#define GPIO_LCD_D3				S5PV210_GPF0(7)
#define GPIO_LCD_D3_AF			2

#define GPIO_LCD_D4				S5PV210_GPF1(0)
#define GPIO_LCD_D4_AF			2

#define GPIO_LCD_D5				S5PV210_GPF1(1)
#define GPIO_LCD_D5_AF			2

#define GPIO_LCD_D6				S5PV210_GPF1(2)
#define GPIO_LCD_D6_AF			2

#define GPIO_LCD_D7				S5PV210_GPF1(3)
#define GPIO_LCD_D7_AF			2

#define GPIO_LCD_D8				S5PV210_GPF1(4)
#define GPIO_LCD_D8_AF			2

#define GPIO_LCD_D9				S5PV210_GPF1(5)
#define GPIO_LCD_D9_AF			2

#define GPIO_LCD_D10			S5PV210_GPF1(6)
#define GPIO_LCD_D10_AF			2

#define GPIO_LCD_D11			S5PV210_GPF1(7)
#define GPIO_LCD_D11_AF			2

#define GPIO_LCD_D12			S5PV210_GPF2(0)
#define GPIO_LCD_D12_AF			2

#define GPIO_LCD_D13			S5PV210_GPF2(1)
#define GPIO_LCD_D13_AF			2

#define GPIO_LCD_D14			S5PV210_GPF2(2)
#define GPIO_LCD_D14_AF			2

#define GPIO_LCD_D15			S5PV210_GPF2(3)
#define GPIO_LCD_D15_AF			2

#define GPIO_LCD_D16			S5PV210_GPF2(4)
#define GPIO_LCD_D16_AF			2

#define GPIO_LCD_D17			S5PV210_GPF2(5)
#define GPIO_LCD_D17_AF			2

#define GPIO_LCD_D18			S5PV210_GPF2(6)
#define GPIO_LCD_D18_AF			2

#define GPIO_LCD_D19			S5PV210_GPF2(7)
#define GPIO_LCD_D19_AF			2

#define GPIO_LCD_D20			S5PV210_GPF3(0)
#define GPIO_LCD_D20_AF			2

#define GPIO_LCD_D21			S5PV210_GPF3(1)
#define GPIO_LCD_D21_AF			2

#define GPIO_LCD_D22			S5PV210_GPF3(2)
#define GPIO_LCD_D22_AF			2

#define GPIO_LCD_D23			S5PV210_GPF3(3)
#define GPIO_LCD_D23_AF			2

#define GPIO_CODEC_LDO_EN		S5PV210_GPF3(4)

#define GPIO_NAND_CLK			S5PV210_GPG0(0)
#define GPIO_NAND_CLK_AF		2

#define GPIO_NAND_CMD			S5PV210_GPG0(1)
#define GPIO_NAND_CMD_AF		2

#define GPIO_ALS_SCL_28V		S5PV210_GPG0(2)

#define GPIO_NAND_D0			S5PV210_GPG0(3)
#define GPIO_NAND_D0_AF			2

#define GPIO_NAND_D1			S5PV210_GPG0(4)
#define GPIO_NAND_D1_AF			2

#define GPIO_NAND_D2			S5PV210_GPG0(5)
#define GPIO_NAND_D2_AF			2

#define GPIO_NAND_D3			S5PV210_GPG0(6)
#define GPIO_NAND_D3_AF			2

#define GPIO_PHONE_ON	       	S5PV210_GPG1(0)

#define GPIO_NAND_D4	       	S5PV210_GPG1(3)
#define GPIO_NAND_D4_AF	       	2

#define GPIO_NAND_D5	        S5PV210_GPG1(4)
#define GPIO_NAND_D5_AF	        2

#define GPIO_NAND_D6	        S5PV210_GPG1(5)
#define GPIO_NAND_D6_AF	        2

#define GPIO_NAND_D7	        S5PV210_GPG1(6)
#define GPIO_NAND_D7_AF	        2

#define GPIO_T_FLASH_CLK		S5PV210_GPG2(0)
#define GPIO_T_FLASH_CLK_AF		2

#define GPIO_T_FLASH_CMD		S5PV210_GPG2(1)
#define GPIO_T_FLASH_CMD_AF		2

#define GPIO_ALS_SDA_28V		S5PV210_GPG2(2)

#define GPIO_T_FLASH_D0			S5PV210_GPG2(3)
#define GPIO_T_FLASH_D0_AF		2

#define GPIO_T_FLASH_D1			S5PV210_GPG2(4)
#define GPIO_T_FLASH_D1_AF		2

#define GPIO_T_FLASH_D2			S5PV210_GPG2(5)
#define GPIO_T_FLASH_D2_AF		2

#define GPIO_T_FLASH_D3			S5PV210_GPG2(6)
#define GPIO_T_FLASH_D3_AF		2

#define GPIO_WLAN_SDIO_CLK		S5PV210_GPG3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2

#define GPIO_WLAN_SDIO_CMD		S5PV210_GPG3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2

#define GPIO_WLAN_EN			S5PV210_GPG3(2)
#define GPIO_WLAN_EN_AF         1

#define GPIO_WLAN_SDIO_D0		S5PV210_GPG3(3)
#define GPIO_WLAN_SDIO_D0_AF	2

#define GPIO_WLAN_SDIO_D1		S5PV210_GPG3(4)
#define GPIO_WLAN_SDIO_D1_AF	2

#define GPIO_WLAN_SDIO_D2		S5PV210_GPG3(5)
#define GPIO_WLAN_SDIO_D2_AF	2

#define GPIO_WLAN_SDIO_D3		S5PV210_GPG3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#define	GPIO_AP_PS_HOLD			S5PV210_GPH0(0)
#define	GPIO_AP_PS_HOLD_AF		1

#define GPIO_ACC_INT			S5PV210_GPH0(1)

#define GPIO_PS_VOUT			S5PV210_GPH0(2)
#define GPIO_PS_VOUT_AF			0xFF

#define GPIO_BUCK_1_EN_A		S5PV210_GPH0(3)

#define GPIO_BUCK_1_EN_B		S5PV210_GPH0(4)

#define GPIO_BUCK_2_EN			S5PV210_GPH0(5)

#define GPIO_DET_35				S5PV210_GPH0(6)
#define GPIO_DET_35_AF			0xFF

#define GPIO_AP_PMIC_IRQ		S5PV210_GPH0(7)
#define GPIO_AP_PMIC_IRQ_AF		0xFF

#define GPIO_FUEL_INT			S5PV210_GPH1(1)

#define GPIO_BT_nRST_REV00           S5PV210_GPH1(2)

#define GPIO_BT_nRST                        S5PV210_GPA1(2)

#define GPIO_nINT_ONEDRAM_AP	__NC__

#define GPIO_HALL_SW			__NC__

#define GPIO_PHONE_ACTIVE		S5PV210_GPH1(7)
#define GPIO_PHONE_ACTIVE_AF	0x1

#define GPIO_KBC0				__NC__
#define GPIO_KBC0_AF			3

#define GPIO_KBC1				__NC__
#define GPIO_KBC1_AF			3

#define VOL_UP					S5PV210_GPH2(0)

#define VOL_DOWN				S5PV210_GPH2(1)

#define GPIO_OPEN_SEND_END		S5PV210_GPH2(2)

#define GPIO_BATT_ID			S5PV210_GPH2(3)

#define GPIO_WLAN_HOST_WAKE		S5PV210_GPH2(4)
#define GPIO_WLAN_HOST_WAKE_AF	0xF

#define GPIO_BT_HOST_WAKE		S5PV210_GPH2(5)
#define GPIO_BT_HOST_WAKE_AF	0xF

#define GPIO_nPOWER				S5PV210_GPH2(6)

#define GPIO_JACK_nINT			S5PV210_GPH2(7)
#define GPIO_JACK_nINT_AF		0xF

#define GPIO_CAM_SCL_18V		S5PV210_GPH3(0)
#define GPIO_CAM_SCL_18V_AF		2
	
#define GPIO_CAM_SDA_18V		S5PV210_GPH3(1)
#define GPIO_CAM_SDA_18V_AF		2

#define GPIO_BT_WAKE			S5PV210_GPH3(2)

#define GPIO_TA_CURRENT_SEL_AP	S5PV210_GPH3(3)

#define GPIO_T_FLASH_DETECT		S5PV210_GPH3(4)

#define GPIO_DPRAM_INT_N		S5PV210_GPH3(5)
#define GPIO_DPRAM_INT_N_AF		0xFF

#define GPIO_EAR_SEND_END		S5PV210_GPH3(6)
#define GPIO_EAR_SEND_END_AF	0xFF

#define GPIO_CP_RST				S5PV210_GPH3(7)

#define GPIO_CODEC_I2S_CLK		S5PV210_GPI(0)
#define GPIO_CODEC_I2S_CLK_AF	2

#define DIC_ID					__NC__

#define GPIO_CODEC_I2S_WS		S5PV210_GPI(2)
#define GPIO_CODEC_I2S_WS_AF	2

#define GPIO_CODEC_I3S_DI		S5PV210_GPI(3)
#define GPIO_CODEC_I3S_DI_AF	2

#define GPIO_CODEC_I3S_DO		S5PV210_GPI(4)
#define GPIO_CODEC_I3S_DO_AF	2


#define GPIO_VIA_A0             S5PV210_GPJ0(0)
#define GPIO_VIA_A0_AF          2
#define GPIO_VIA_A1             S5PV210_GPJ0(1)
#define GPIO_VIA_A1_AF          2
#define GPIO_VIA_A2             S5PV210_GPJ0(2)
#define GPIO_VIA_A2_AF          2
#define GPIO_VIA_A3             S5PV210_GPJ0(3)
#define GPIO_VIA_A3_AF          2
#define GPIO_VIA_A4             S5PV210_GPJ0(4)
#define GPIO_VIA_A4_AF          2
#define GPIO_VIA_A5             S5PV210_GPJ0(5)
#define GPIO_VIA_A5_AF          2
#define GPIO_VIA_A6             S5PV210_GPJ0(6)
#define GPIO_VIA_A6_AF          2
#define GPIO_VIA_A7             S5PV210_GPJ0(7)
#define GPIO_VIA_A7_AF          2
#define GPIO_VIA_A8             S5PV210_GPJ1(0)
#define GPIO_VIA_A8_AF          2
#define GPIO_VIA_A9             S5PV210_GPJ1(1)
#define GPIO_VIA_A9_AF          2
#define GPIO_VIA_A10            S5PV210_GPJ1(2)
#define GPIO_VIA_A10_AF         2
#define GPIO_VIA_A11            S5PV210_GPJ1(3)
#define GPIO_VIA_A11_AF         2
#define GPIO_VIA_A12            S5PV210_GPJ1(4)
#define GPIO_VIA_A12_AF         2
#define GPIO_VIA_A13            S5PV210_GPJ1(5)
#define GPIO_VIA_A13_AF         2


#define GPIO_VIA_D0             S5PV210_GPJ2(0)
#define GPIO_VIA_D0_AF          2
#define GPIO_VIA_D1             S5PV210_GPJ2(1)
#define GPIO_VIA_D1_AF          2
#define GPIO_VIA_D2             S5PV210_GPJ2(2)
#define GPIO_VIA_D2_AF          2
#define GPIO_VIA_D3             S5PV210_GPJ2(3)
#define GPIO_VIA_D3_AF          2
#define GPIO_VIA_D4             S5PV210_GPJ2(4)
#define GPIO_VIA_D4_AF          2
#define GPIO_VIA_D5             S5PV210_GPJ2(5)
#define GPIO_VIA_D5_AF          2
#define GPIO_VIA_D6             S5PV210_GPJ2(6)
#define GPIO_VIA_D6_AF          2
#define GPIO_VIA_D7             S5PV210_GPJ2(7)
#define GPIO_VIA_D7_AF          2
#define GPIO_VIA_D8             S5PV210_GPJ3(0)
#define GPIO_VIA_D8_AF          2
#define GPIO_VIA_D9             S5PV210_GPJ3(1)
#define GPIO_VIA_D9_AF          2
#define GPIO_VIA_D10            S5PV210_GPJ3(2)
#define GPIO_VIA_D10_AF         2
#define GPIO_VIA_D11            S5PV210_GPJ3(3)
#define GPIO_VIA_D11_AF         2
#define GPIO_VIA_D12            S5PV210_GPJ3(4)
#define GPIO_VIA_D12_AF         2
#define GPIO_VIA_D13            S5PV210_GPJ3(5)
#define GPIO_VIA_D13_AF         2
#define GPIO_VIA_D14            S5PV210_GPJ3(6)
#define GPIO_VIA_D14_AF         2
#define GPIO_VIA_D15            S5PV210_GPJ3(7)
#define GPIO_VIA_D15_AF         2

#define GPIO_DP_CSB	        	S5PV210_GPJ4(0)
#define GPIO_DP_CSB_AF	       	2

#define GPIO_WE_N		    	S5PV210_GPJ4(1)
#define GPIO_WE_N_AF	       	2

#define GPIO_OE_N		    	S5PV210_GPJ4(2)
#define GPIO_OE_N_AF	      	2

#define GPIO_VIA_DPRAM_INT_N	S5PV210_GPJ4(3)

#define GPIO_MASSMEMORY_EN		S5PV210_MP01(0)

#define GPIO_DISPLAY_CS			S5PV210_MP01(1)
#define GPIO_DISPLAY_CS_AF		S3C_GPIO_SFN(1)

#define GPIO_AP_NANDCS			S5PV210_MP01(4)
#define GPIO_AP_NANDCS_AF		5

#define FUEL_SCL_18V			S5PV210_MP02(3)

#define GPIO_HWREV_MODE3		S5PV210_MP03(2)

#define FUEL_SDA_18V			S5PV210_MP03(3)

#define FUEL_SCL_18V_REV02		S5PV210_GPH1(2)
#define FUEL_SDA_18V_REV02		S5PV210_GPH1(3)

#define GPIO_HWREV_MODE0		S5PV210_MP03(5)
#define GPIO_HWREV_MODE1		S5PV210_MP03(6)
#define GPIO_HWREV_MODE2		S5PV210_MP03(7)

#define GPIO_AP_SCL_18V			S5PV210_MP05(5)

#define GPIO_AP_SDA_18V			S5PV210_MP05(6)

#define GPIO_UART_SEL			S5PV210_MP05(7)

#define GPIO_PHONE_ON_REV00        S5PV210_MP06(4)

#define GPIO_TSP_LDO_ON         S5PV210_MP06(6)

#define GPIO_VIA_PS_HOLD_OFF    S5PV210_MP07(1)

#define GPIO_MICBIAS_EN1        S5PV210_MP07(2)

#define GPIO_MICBIAS_EN         S5PV210_MP07(4)



#define GPIO_EARPATH_SEL		__NC__
#define GPIO_MSENSE_IRQ			__NC__

#define GPIO_FM_INT				__NC__
#define GPIO_FM_RST				__NC__
#define GPIO_FM_SDA_28V			__NC__
#define GPIO_FM_SDA_28V_AF		2
#define GPIO_FM_SCL_28V			__NC__
#define GPIO_FM_SCL_28V_AF		2

#define _3_TOUCH_SDA_28V		__NC__
#define _3_TOUCH_SCL_28V		__NC__
#define _3_GPIO_TOUCH_EN		__NC__
#define _3_GPIO_TOUCH_EN_AF		1
#define _3_GPIO_TOUCH_CE		__NC__
#define _3_GPIO_TOUCH_ST_AF		1

#define NFC_SCL_18V				__NC__
#define NFC_SDA_18V				__NC__
#define NFC_IRQ					__NC__
#define NFC_EN					__NC__
#define NFC_FIRM		 	 	__NC__

#define GPIO_FLM_RXD			__NC__
#define GPIO_FLM_RXD_AF			0
#define GPIO_FLM_TXD			__NC__
#define GPIO_FLM_TXD_AF			0

#define GPIO_GPS_nRST			S5PV210_GPC1(1)
#define GPIO_GPS_PWR_EN			S5PV210_GPC1(4)
#define GPIO_GPS_RXD			S5PV210_GPA0(4)
#define GPIO_GPS_RXD_AF			2
#define GPIO_GPS_TXD			S5PV210_GPA0(5)
#define GPIO_GPS_TXD_AF			2
#define GPIO_GPS_CTS			__NC__
#define GPIO_GPS_CTS_AF			0
#define GPIO_GPS_RTS			__NC__
#define GPIO_GPS_RTS_AF			0

#define GPIO_nINT_ONEDRAM_AP_AF         __NC__
#define GPIO_WLAN_nRST         __NC__
#define GPIO_USB_SW_EN1         __NC__
#define GPIO_UART_SEL1         __NC__
#define GPIO_OLED_DET          __NC__
#define TOUCHKEY_PWR_EN        __NC__
#define GPIO_CAM_VGA_nRST      __NC__
#define GPIO_PS_ON             __NC__
#define GPIO_CAM_FLASH_EN      __NC__
#define GPIO_CAM_FLASH_SET     __NC__
#define GPIO_TOUCH_EN          __NC__
#define GPIO_VIBTONE_EN1       __NC__

#endif
/* end of __GPIO_ARIES_H_ */

