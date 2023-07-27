/* SPDX-License-Identifier: GPL-2.0 */
/*
 * SDIO Classes, Interface Types, Manufacturer IDs, etc.
 */

#ifndef LINUX_MMC_SDIO_IDS_H
#define LINUX_MMC_SDIO_IDS_H

/*
 * Standard SDIO Function Interfaces
 */

#define SDIO_CLASS_NONE		0x00	/* Not a SDIO standard interface */
#define SDIO_CLASS_UART		0x01	/* standard UART interface */
#define SDIO_CLASS_BT_A		0x02	/* Type-A BlueTooth std interface */
#define SDIO_CLASS_BT_B		0x03	/* Type-B BlueTooth std interface */
#define SDIO_CLASS_GPS		0x04	/* GPS standard interface */
#define SDIO_CLASS_CAMERA	0x05	/* Camera standard interface */
#define SDIO_CLASS_PHS		0x06	/* PHS standard interface */
#define SDIO_CLASS_WLAN		0x07	/* WLAN interface */
#define SDIO_CLASS_ATA		0x08	/* Embedded SDIO-ATA std interface */
#define SDIO_CLASS_BT_AMP	0x09	/* Type-A Bluetooth AMP interface */

/*
 * Vendors and devices.  Sort key: vendor first, device next.
 */

#define SDIO_VENDOR_ID_STE			0x0020
#define SDIO_DEVICE_ID_STE_CW1200		0x2280

#define SDIO_VENDOR_ID_INTEL			0x0089
#define SDIO_DEVICE_ID_INTEL_IWMC3200WIMAX	0x1402
#define SDIO_DEVICE_ID_INTEL_IWMC3200WIFI	0x1403
#define SDIO_DEVICE_ID_INTEL_IWMC3200TOP	0x1404
#define SDIO_DEVICE_ID_INTEL_IWMC3200GPS	0x1405
#define SDIO_DEVICE_ID_INTEL_IWMC3200BT		0x1406
#define SDIO_DEVICE_ID_INTEL_IWMC3200WIMAX_2G5	0x1407

#define SDIO_VENDOR_ID_CGUYS			0x0092
#define SDIO_DEVICE_ID_CGUYS_EW_CG1102GC	0x0004

#define SDIO_VENDOR_ID_TI			0x0097
#define SDIO_DEVICE_ID_TI_WL1271		0x4076

#define SDIO_VENDOR_ID_ATHEROS			0x0271
#define SDIO_DEVICE_ID_ATHEROS_AR6003_00	0x0300
#define SDIO_DEVICE_ID_ATHEROS_AR6003_01	0x0301
#define SDIO_DEVICE_ID_ATHEROS_AR6004_00	0x0400
#define SDIO_DEVICE_ID_ATHEROS_AR6004_01	0x0401
#define SDIO_DEVICE_ID_ATHEROS_AR6004_02	0x0402
#define SDIO_DEVICE_ID_ATHEROS_AR6004_18	0x0418
#define SDIO_DEVICE_ID_ATHEROS_AR6004_19	0x0419
#define SDIO_DEVICE_ID_ATHEROS_AR6005		0x050A
#define SDIO_DEVICE_ID_ATHEROS_QCA9377		0x0701

#define SDIO_VENDOR_ID_BROADCOM			0x02d0
#define SDIO_DEVICE_ID_BROADCOM_NINTENDO_WII	0x044b
#define SDIO_DEVICE_ID_BROADCOM_43241		0x4324
#define SDIO_DEVICE_ID_BROADCOM_4329		0x4329
#define SDIO_DEVICE_ID_BROADCOM_4330		0x4330
#define SDIO_DEVICE_ID_BROADCOM_4334		0x4334
#define SDIO_DEVICE_ID_BROADCOM_4335_4339	0x4335
#define SDIO_DEVICE_ID_BROADCOM_4339		0x4339
#define SDIO_DEVICE_ID_BROADCOM_4345		0x4345
#define SDIO_DEVICE_ID_BROADCOM_4354		0x4354
#define SDIO_DEVICE_ID_BROADCOM_CYPRESS_89359	0x4355
#define SDIO_DEVICE_ID_BROADCOM_4356		0x4356
#define SDIO_DEVICE_ID_BROADCOM_4359		0x4359
#define SDIO_DEVICE_ID_BROADCOM_CYPRESS_4373	0x4373
#define SDIO_DEVICE_ID_BROADCOM_CYPRESS_43012	0xa804
#define SDIO_DEVICE_ID_BROADCOM_43143		0xa887
#define SDIO_DEVICE_ID_BROADCOM_43340		0xa94c
#define SDIO_DEVICE_ID_BROADCOM_43341		0xa94d
#define SDIO_DEVICE_ID_BROADCOM_43362		0xa962
#define SDIO_DEVICE_ID_BROADCOM_43364		0xa9a4
#define SDIO_DEVICE_ID_BROADCOM_43430		0xa9a6
#define SDIO_DEVICE_ID_BROADCOM_CYPRESS_43439	0xa9af
#define SDIO_DEVICE_ID_BROADCOM_43455		0xa9bf
#define SDIO_DEVICE_ID_BROADCOM_CYPRESS_43752	0xaae8

#define SDIO_VENDOR_ID_MARVELL			0x02df
#define SDIO_DEVICE_ID_MARVELL_LIBERTAS		0x9103
#define SDIO_DEVICE_ID_MARVELL_8688_WLAN	0x9104
#define SDIO_DEVICE_ID_MARVELL_8688_BT		0x9105
#define SDIO_DEVICE_ID_MARVELL_8786_WLAN	0x9116
#define SDIO_DEVICE_ID_MARVELL_8787_WLAN	0x9119
#define SDIO_DEVICE_ID_MARVELL_8787_BT		0x911a
#define SDIO_DEVICE_ID_MARVELL_8787_BT_AMP	0x911b
#define SDIO_DEVICE_ID_MARVELL_8797_F0		0x9128
#define SDIO_DEVICE_ID_MARVELL_8797_WLAN	0x9129
#define SDIO_DEVICE_ID_MARVELL_8797_BT		0x912a
#define SDIO_DEVICE_ID_MARVELL_8897_WLAN	0x912d
#define SDIO_DEVICE_ID_MARVELL_8897_BT		0x912e
#define SDIO_DEVICE_ID_MARVELL_8887_F0		0x9134
#define SDIO_DEVICE_ID_MARVELL_8887_WLAN	0x9135
#define SDIO_DEVICE_ID_MARVELL_8887_BT		0x9136
#define SDIO_DEVICE_ID_MARVELL_8801_WLAN	0x9139
#define SDIO_DEVICE_ID_MARVELL_8997_F0		0x9140
#define SDIO_DEVICE_ID_MARVELL_8997_WLAN	0x9141
#define SDIO_DEVICE_ID_MARVELL_8997_BT		0x9142
#define SDIO_DEVICE_ID_MARVELL_8977_WLAN	0x9145
#define SDIO_DEVICE_ID_MARVELL_8977_BT		0x9146
#define SDIO_DEVICE_ID_MARVELL_8987_WLAN	0x9149
#define SDIO_DEVICE_ID_MARVELL_8987_BT		0x914a

#define SDIO_VENDOR_ID_MEDIATEK			0x037a
#define SDIO_DEVICE_ID_MEDIATEK_MT7663		0x7663
#define SDIO_DEVICE_ID_MEDIATEK_MT7668		0x7668
#define SDIO_DEVICE_ID_MEDIATEK_MT7961		0x7961

#define SDIO_VENDOR_ID_MICROCHIP_WILC		0x0296
#define SDIO_DEVICE_ID_MICROCHIP_WILC1000	0x5347

#define SDIO_VENDOR_ID_REALTEK			0x024c
#define SDIO_DEVICE_ID_REALTEK_RTW8723BS	0xb723
#define SDIO_DEVICE_ID_REALTEK_RTW8821BS	0xb821
#define SDIO_DEVICE_ID_REALTEK_RTW8822BS	0xb822
#define SDIO_DEVICE_ID_REALTEK_RTW8821CS	0xc821
#define SDIO_DEVICE_ID_REALTEK_RTW8822CS	0xc822
#define SDIO_DEVICE_ID_REALTEK_RTW8723DS_2ANT	0xd723
#define SDIO_DEVICE_ID_REALTEK_RTW8723DS_1ANT	0xd724
#define SDIO_DEVICE_ID_REALTEK_RTW8821DS	0xd821

#define SDIO_VENDOR_ID_SIANO			0x039a
#define SDIO_DEVICE_ID_SIANO_NOVA_B0		0x0201
#define SDIO_DEVICE_ID_SIANO_NICE		0x0202
#define SDIO_DEVICE_ID_SIANO_VEGA_A0		0x0300
#define SDIO_DEVICE_ID_SIANO_VENICE		0x0301
#define SDIO_DEVICE_ID_SIANO_MING		0x0302
#define SDIO_DEVICE_ID_SIANO_PELE		0x0500
#define SDIO_DEVICE_ID_SIANO_RIO		0x0600
#define SDIO_DEVICE_ID_SIANO_DENVER_2160	0x0700
#define SDIO_DEVICE_ID_SIANO_DENVER_1530	0x0800
#define SDIO_DEVICE_ID_SIANO_NOVA_A0		0x1100
#define SDIO_DEVICE_ID_SIANO_STELLAR 		0x5347

#define SDIO_VENDOR_ID_RSI			0x041b
#define SDIO_DEVICE_ID_RSI_9113			0x9330
#define SDIO_DEVICE_ID_RSI_9116			0x9116

#define SDIO_VENDOR_ID_TI_WL1251		0x104c
#define SDIO_DEVICE_ID_TI_WL1251		0x9066

#endif /* LINUX_MMC_SDIO_IDS_H */
