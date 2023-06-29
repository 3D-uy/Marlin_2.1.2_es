/**
 * Firmware de Impresora 3D Marlin
 * Derechos de autor (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Basado en Sprinter y grbl.
 * Derechos de autor (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * Este programa es software libre: puedes redistribuirlo y/o modificarlo
 * bajo los términos de la Licencia Pública General GNU publicada por
 * la Fundación del Software Libre, ya sea la versión 3 de la Licencia o
 * (a tu elección) cualquier versión posterior.
 *
 * Este programa se distribuye con la esperanza de que sea útil,
 * pero SIN GARANTÍA ALGUNA; sin siquiera la garantía implícita de
 * COMERCIABILIDAD o APTITUD PARA UN PROPÓSITO PARTICULAR. Consulta los
 * detalles de la Licencia Pública General GNU para obtener más información.
 *
 * Deberías haber recibido una copia de la Licencia Pública General GNU
 * junto con este programa. Si no, consulta <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Siempre que se realicen cambios en este archivo, actualiza Marlin/Makefile
 * y _data/boards.yml en el repositorio MarlinDocumentation.
 */

#include "macros.h"

#define BOARD_UNKNOWN -1

//
// RAMPS 1.3 / 1.4 - ATmega1280, ATmega2560
//

#define BOARD_RAMPS_OLD               1000  // MEGA/RAMPS hasta 1.2

#define BOARD_RAMPS_13_EFB            1010  // RAMPS 1.3 (Salidas de alimentación: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_13_EEB            1011  // RAMPS 1.3 (Salidas de alimentación: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_13_EFF            1012  // RAMPS 1.3 (Salidas de alimentación: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_13_EEF            1013  // RAMPS 1.3 (Salidas de alimentación: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_13_SF             1014  // RAMPS 1.3 (Salidas de alimentación: Husillo, Ventilador del controlador)

#define BOARD_RAMPS_14_EFB            1020  // RAMPS 1.4 (Salidas de alimentación: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_14_EEB            1021  // RAMPS 1.4 (Salidas de alimentación: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_14_EFF            1022  // RAMPS 1.4 (Salidas de alimentación: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_14_EEF            1023  // RAMPS 1.4 (Salidas de alimentación: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_14_SF             1024  // RAMPS 1.4 (Salidas de alimentación: Husillo, Ventilador del controlador)

#define BOARD_RAMPS_PLUS_EFB          1030  // RAMPS Plus 3DYMY (Salidas de alimentación: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_PLUS_EEB          1031  // RAMPS Plus 3DYMY (Salidas de alimentación: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_PLUS_EFF          1032  // RAMPS Plus 3DYMY (Salidas de alimentación: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_PLUS_EEF          1033  // RAMPS Plus 3DYMY (Salidas de alimentación: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_PLUS_SF           1034  // RAMPS Plus 3DYMY (Salidas de alimentación: Husillo, Ventilador del controlador)

//
// Derivados de RAMPS - ATmega1280, ATmega2560
//

#define BOARD_3DRAG                   1100  // Controlador 3Drag
#define BOARD_K8200                   1101  // Controlador Velleman K8200 (derivado del Controlador 3Drag)
#define BOARD_K8400                   1102  // Controlador Velleman K8400 (derivado del Controlador 3Drag)
#define BOARD_K8600                   1103  // Controlador Velleman K8600 (Vertex Nano)
#define BOARD_K8800                   1104  // Controlador Velleman K8800 (Vertex Delta)
#define BOARD_BAM_DICE                1105  // 2PrintBeta BAM&DICE con controladores STK
#define BOARD_BAM_DICE_DUE            1106  // 2PrintBeta BAM&DICE Due con controladores STK
#define BOARD_MKS_BASE                1107  // MKS BASE v1.0
#define BOARD_MKS_BASE_14             1108  // MKS BASE v1.4 con controladores de motor paso a paso Allegro A4982
#define BOARD_MKS_BASE_15             1109  // MKS BASE v1.5 con controladores de motor paso a paso Allegro A4982
#define BOARD_MKS_BASE_16             1110  // MKS BASE v1.6 con controladores de motor paso a paso Allegro A4982
#define BOARD_MKS_BASE_HEROIC         1111  // MKS BASE 1.0 con controladores de motor paso a paso Heroic HR4982
#define BOARD_MKS_GEN_13              1112  // MKS GEN v1.3 o 1.4
#define BOARD_MKS_GEN_L               1113  // MKS GEN L
#define BOARD_KFB_2                   1114  // Placa BigTreeTech o BIQU KFB2.0
#define BOARD_ZRIB_V20                1115  // zrib V2.0 (Réplica china de RAMPS)
#define BOARD_ZRIB_V52                1116  // zrib V5.2 (Réplica china de RAMPS)
#define BOARD_FELIX2                  1117  // Placa electrónica Felix 2.0+ (similar a RAMPS)
#define BOARD_RIGIDBOARD              1118  // Invent-A-Part RigidBoard
#define BOARD_RIGIDBOARD_V2           1119  // Invent-A-Part RigidBoard V2
#define BOARD_SAINSMART_2IN1          1120  // Placa Sainsmart 2-en-1
#define BOARD_ULTIMAKER               1121  // Ultimaker
#define BOARD_ULTIMAKER_OLD           1122  // Ultimaker (Electrónica más antigua. Anterior a 1.5.4. Esto es raro)
#define BOARD_AZTEEG_X3               1123  // Azteeg X3
#define BOARD_AZTEEG_X3_PRO           1124  // Azteeg X3 Pro
#define BOARD_ULTIMAIN_2              1125  // Ultimainboard 2.x (Utiliza TEMP_SENSOR 20)
#define BOARD_RUMBA                   1126  // Rumba
#define BOARD_RUMBA_RAISE3D           1127  // Rumba derivada de Raise3D N series
#define BOARD_RL200                   1128  // Rapide Lite 200 (v1, clon de RUMBA de bajo costo con drv)
#define BOARD_FORMBOT_TREX2PLUS       1129  // Formbot T-Rex 2 Plus
#define BOARD_FORMBOT_TREX3           1130  // Formbot T-Rex 3
#define BOARD_FORMBOT_RAPTOR          1131  // Formbot Raptor
#define BOARD_FORMBOT_RAPTOR2         1132  // Formbot Raptor 2
#define BOARD_BQ_ZUM_MEGA_3D          1133  // bq ZUM Mega 3D
#define BOARD_MAKEBOARD_MINI          1134  // MakeBoard Mini v2.1.2 de MicroMake
#define BOARD_TRIGORILLA_13           1135  // Versión 1.3 de TriGorilla Anycubic basada en RAMPS EFB
#define BOARD_TRIGORILLA_14           1136  //   ... Ver 1.4
#define BOARD_TRIGORILLA_14_11        1137  //   ... Rev 1.1 (nuevo orden de pines de servo)
#define BOARD_RAMPS_ENDER_4           1138  // Creality: Ender-4, CR-8
#define BOARD_RAMPS_CREALITY          1139  // Creality: CR10S, CR20, CR-X
#define BOARD_DAGOMA_F5               1140  // Dagoma F5
#define BOARD_FYSETC_F6_13            1141  // FYSETC F6 1.3
#define BOARD_FYSETC_F6_14            1142  // FYSETC F6 1.4
#define BOARD_DUPLICATOR_I3_PLUS      1143  // Wanhao Duplicator i3 Plus
#define BOARD_VORON                   1144  // Diseño VORON
#define BOARD_TRONXY_V3_1_0           1145  // Tronxy TRONXY-V3-1.0
#define BOARD_Z_BOLT_X_SERIES         1146  // Serie Z-Bolt X
#define BOARD_TT_OSCAR                1147  // TT OSCAR
#define BOARD_OVERLORD                1148  // Overlord/Overlord Pro
#define BOARD_HJC2560C_REV1           1149  // ADIMLab Gantry v1
#define BOARD_HJC2560C_REV2           1150  // ADIMLab Gantry v2
#define BOARD_TANGO                   1151  // BIQU Tango V1
#define BOARD_MKS_GEN_L_V2            1152  // MKS GEN L V2
#define BOARD_MKS_GEN_L_V21           1153  // MKS GEN L V2.1
#define BOARD_COPYMASTER_3D           1154  // Copymaster 3D
#define BOARD_ORTUR_4                 1155  // Ortur 4
#define BOARD_TENLOG_D3_HERO          1156  // Impresora Tenlog D3 Hero IDEX
#define BOARD_TENLOG_MB1_V23          1157  // Impresora Tenlog D3, D5, D6 IDEX
#define BOARD_RAMPS_S_12_EEFB         1158  // Ramps S 1.2 de Sakul.cz (Salidas de alimentación: Hotend0, Hotend1, Ventilador, Cama)
#define BOARD_RAMPS_S_12_EEEB         1159  // Ramps S 1.2 de Sakul.cz (Salidas de alimentación: Hotend0, Hotend1, Hotend2, Cama)
#define BOARD_RAMPS_S_12_EFFB         1160  // Ramps S 1.2 de Sakul.cz (Salidas de alimentación: Hotend, Ventilador0, Ventilador1, Cama)
#define BOARD_LONGER3D_LK1_PRO        1161  // Longer LK1 PRO / Alfawise U20 Pro (versión PRO)
#define BOARD_LONGER3D_LKx_PRO        1162  // Longer LKx PRO / Alfawise Uxx Pro (versión PRO)
#define BOARD_ZRIB_V53                1163  // zrib V5.3 (Réplica china de RAMPS)
#define BOARD_PXMALION_CORE_I3        1164  // Pxmalion Core I3
#define BOARD_PANOWIN_CUTLASS         1165  // Panowin Cutlass (como se encuentra en la Panowin F1)
#define BOARD_KODAMA_BARDO            1166  // Kodama Bardo V1.x (como se encuentra en la Kodama Trinus)

//
// RAMBo y derivados
//

#define BOARD_RAMBO                   1200  // Rambo
#define BOARD_MINIRAMBO               1201  // Mini-Rambo
#define BOARD_MINIRAMBO_10A           1202  // Mini-Rambo 1.0a
#define BOARD_EINSY_RAMBO             1203  // Einsy Rambo
#define BOARD_EINSY_RETRO             1204  // Einsy Retro
#define BOARD_SCOOVO_X9H              1205  // abee Scoovo X9H
#define BOARD_RAMBO_THINKERV2         1206  // ThinkerV2

//
// Otros ATmega1280, ATmega2560
//

#define BOARD_CNCONTROLS_11           1300  // Cartesio CN Controls V11
#define BOARD_CNCONTROLS_12           1301  // Cartesio CN Controls V12
#define BOARD_CNCONTROLS_15           1302  // Cartesio CN Controls V15
#define BOARD_CHEAPTRONIC             1303  // Cheaptronic v1.0
#define BOARD_CHEAPTRONIC_V2          1304  // Cheaptronic v2.0
#define BOARD_MIGHTYBOARD_REVE        1305  // Makerbot Mightyboard Revisión E
#define BOARD_MEGATRONICS             1306  // Megatronics
#define BOARD_MEGATRONICS_2           1307  // Megatronics v2.0
#define BOARD_MEGATRONICS_3           1308  // Megatronics v3.0
#define BOARD_MEGATRONICS_31          1309  // Megatronics v3.1
#define BOARD_MEGATRONICS_32          1310  // Megatronics v3.2
#define BOARD_ELEFU_3                 1311  // Placa Elefu Ra (v3)
#define BOARD_LEAPFROG                1312  // Leapfrog
#define BOARD_MEGACONTROLLER          1313  // Mega controller
#define BOARD_GT2560_REV_A            1314  // Geeetech GT2560 Revisión A
#define BOARD_GT2560_REV_A_PLUS       1315  // Geeetech GT2560 Revisión A+ (con sonda de autonivelación)
#define BOARD_GT2560_REV_B            1316  // Geeetech GT2560 Revisión B
#define BOARD_GT2560_V3               1317  // Geeetech GT2560 Rev B para A10(M/T/D)
#define BOARD_GT2560_V4               1318  // Geeetech GT2560 Rev B para A10(M/T/D)
#define BOARD_GT2560_V3_MC2           1319  // Geeetech GT2560 Rev B para Mecreator2
#define BOARD_GT2560_V3_A20           1320  // Geeetech GT2560 Rev B para A20(M/T/D)
#define BOARD_EINSTART_S              1321  // Retrofit de Einstart
#define BOARD_WANHAO_ONEPLUS          1322  // Wanhao 0ne+ i3 Mini
#define BOARD_LEAPFROG_XEED2015       1323  // Leapfrog Xeed 2015
#define BOARD_PICA_REVB               1324  // PICA Shield (versión original)
#define BOARD_PICA                     1325  // PICA Shield (rev C o posterior)
#define BOARD_INTAMSYS40              1326  // Intamsys 4.0 (Funmat HT)
#define BOARD_MALYAN_M180             1327  // Malyan M180 Mainboard Versión 2 (sin función de pantalla, solo G-code directo)
#define BOARD_GT2560_V4_A20           1328  // Geeetech GT2560 Rev B para A20(M/T/D)
#define BOARD_PROTONEER_CNC_SHIELD_V3 1329  // Mega controller y Protoneer CNC Shield V3.00
#define BOARD_WEEDO_62A               1330  // Placa WEEDO 62A (TINA2, Monoprice Cadet, etc.)

//
// ATmega1281, ATmega2561
//

#define BOARD_MINITRONICS             1400  // Minitronics v1.0/1.1
#define BOARD_SILVER_GATE             1401  // Silvergate v1.0

//
// Sanguinololu y derivados - ATmega644P, ATmega1284P
//

#define BOARD_SANGUINOLOLU_11         1500  // Sanguinololu < 1.2
#define BOARD_SANGUINOLOLU_12         1501  // Sanguinololu 1.2 y superior
#define BOARD_MELZI                   1502  // Melzi
#define BOARD_MELZI_V2                1503  // Melzi V2
#define BOARD_MELZI_MAKR3D            1504  // Melzi con ATmega1284 (versión MaKr3d)
#define BOARD_MELZI_CREALITY          1505  // Melzi Creality3D (para CR-10, etc.)
#define BOARD_MELZI_CREALITY_ENDER2   1506  // Melzi Creality3D (para Ender-2)
#define BOARD_MELZI_MALYAN            1507  // Melzi Malyan M150
#define BOARD_MELZI_TRONXY            1508  // Tronxy X5S
#define BOARD_STB_11                  1509  // STB V1.1
#define BOARD_AZTEEG_X1               1510  // Azteeg X1
#define BOARD_ANET_10                 1511  // Anet 1.0 (clon Melzi)
#define BOARD_ZMIB_V2                 1512  // ZoneStar ZMIB V2

//
// Otros ATmega644P, ATmega644, ATmega1284P
//

#define BOARD_GEN3_MONOLITHIC         1600  // Gen3 Monolithic Electronics
#define BOARD_GEN3_PLUS               1601  // Gen3+
#define BOARD_GEN6                    1602  // Gen6
#define BOARD_GEN6_DELUXE             1603  // Gen6 deluxe
#define BOARD_GEN7_CUSTOM             1604  // Gen7 personalizado (versión Alfons3) https://github.com/Alfons3/Generation_7_Electronics
#define BOARD_GEN7_12                 1605  // Gen7 v1.1, v1.2
#define BOARD_GEN7_13                 1606  // Gen7 v1.3
#define BOARD_GEN7_14                 1607  // Gen7 v1.4
#define BOARD_OMCA_A                  1608  // Alpha OMCA
#define BOARD_OMCA                    1609  // OMCA final
#define BOARD_SETHI                   1610  // Sethi 3D_1

//
// Teensyduino - AT90USB1286, AT90USB1286P
//

#define BOARD_TEENSYLU                1700  // Teensylu
#define BOARD_PRINTRBOARD             1701  // Placa Printrboard (AT90USB1286)
#define BOARD_PRINTRBOARD_REVF        1702  // Placa Printrboard Revisión F (AT90USB1286)
#define BOARD_BRAINWAVE               1703  // Brainwave (AT90USB646)
#define BOARD_BRAINWAVE_PRO           1704  // Brainwave Pro (AT90USB1286)
#define BOARD_SAV_MKI                 1705  // SAV Mk-I (AT90USB1286)
#define BOARD_TEENSY2                 1706  // Teensy++2.0 (AT90USB1286)
#define BOARD_5DPRINT                 1707  // Placa de control 5DPrint D8

//
// LPC1768 ARM Cortex-M3
//

#define BOARD_RAMPS_14_RE_ARM_EFB     2000  // Re-ARM con RAMPS 1.4 (Salidas de potencia: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_14_RE_ARM_EEB     2001  // Re-ARM con RAMPS 1.4 (Salidas de potencia: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_14_RE_ARM_EFF     2002  // Re-ARM con RAMPS 1.4 (Salidas de potencia: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_14_RE_ARM_EEF     2003  // Re-ARM con RAMPS 1.4 (Salidas de potencia: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_14_RE_ARM_SF      2004  // Re-ARM con RAMPS 1.4 (Salidas de potencia: Husillo, Ventilador del controlador)
#define BOARD_MKS_SBASE               2005  // MKS-Sbase
#define BOARD_AZSMZ_MINI              2006  // AZSMZ Mini
#define BOARD_BIQU_BQ111_A4           2007  // BIQU BQ111-A4
#define BOARD_SELENA_COMPACT          2008  // Selena Compact
#define BOARD_BIQU_B300_V1_0          2009  // BIQU B300_V1.0
#define BOARD_MKS_SGEN_L              2010  // MKS-SGen-L
#define BOARD_GMARSH_X6_REV1          2011  // GMARSH X6, prototipo de revisión 1
#define BOARD_BTT_SKR_V1_1            2012  // BigTreeTech SKR v1.1
#define BOARD_BTT_SKR_V1_3            2013  // BigTreeTech SKR v1.3
#define BOARD_BTT_SKR_V1_4            2014  // BigTreeTech SKR v1.4
#define BOARD_EMOTRONIC               2015  // eMotion-Tech eMotronic

//
// LPC1769 ARM Cortex-M3
//

#define BOARD_MKS_SGEN                2500  // MKS-SGen
#define BOARD_AZTEEG_X5_GT            2501  // Azteeg X5 GT
#define BOARD_AZTEEG_X5_MINI          2502  // Azteeg X5 Mini
#define BOARD_AZTEEG_X5_MINI_WIFI     2503  // Azteeg X5 Mini Wifi
#define BOARD_COHESION3D_REMIX        2504  // Cohesion3D ReMix
#define BOARD_COHESION3D_MINI         2505  // Cohesion3D Mini
#define BOARD_SMOOTHIEBOARD           2506  // Smoothieboard
#define BOARD_TH3D_EZBOARD            2507  // TH3D EZBoard v1.0
#define BOARD_BTT_SKR_V1_4_TURBO      2508  // BigTreeTech SKR v1.4 TURBO
#define BOARD_MKS_SGEN_L_V2           2509  // MKS SGEN_L V2
#define BOARD_BTT_SKR_E3_TURBO        2510  // BigTreeTech SKR E3 Turbo
#define BOARD_FLY_CDY                 2511  // FLYmaker FLY CDY

//
// SAM3X8E ARM Cortex-M3
//

#define BOARD_DUE3DOM                 3000  // DUE3DOM para Arduino DUE
#define BOARD_DUE3DOM_MINI            3001  // DUE3DOM MINI para Arduino DUE
#define BOARD_RADDS                   3002  // RADDS
#define BOARD_RAMPS_FD_V1             3003  // RAMPS-FD v1
#define BOARD_RAMPS_FD_V2             3004  // RAMPS-FD v2
#define BOARD_RAMPS_SMART_EFB         3005  // RAMPS-SMART (Salidas de potencia: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_SMART_EEB         3006  // RAMPS-SMART (Salidas de potencia: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_SMART_EFF         3007  // RAMPS-SMART (Salidas de potencia: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_SMART_EEF         3008  // RAMPS-SMART (Salidas de potencia: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_SMART_SF          3009  // RAMPS-SMART (Salidas de potencia: Husillo, Ventilador del controlador)
#define BOARD_RAMPS_DUO_EFB           3010  // RAMPS Duo (Salidas de potencia: Hotend, Ventilador, Cama)
#define BOARD_RAMPS_DUO_EEB           3011  // RAMPS Duo (Salidas de potencia: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS_DUO_EFF           3012  // RAMPS Duo (Salidas de potencia: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS_DUO_EEF           3013  // RAMPS Duo (Salidas de potencia: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS_DUO_SF            3014  // RAMPS Duo (Salidas de potencia: Husillo, Ventilador del controlador)
#define BOARD_RAMPS4DUE_EFB           3015  // RAMPS4DUE (Salidas de potencia: Hotend, Ventilador, Cama)
#define BOARD_RAMPS4DUE_EEB           3016  // RAMPS4DUE (Salidas de potencia: Hotend0, Hotend1, Cama)
#define BOARD_RAMPS4DUE_EFF           3017  // RAMPS4DUE (Salidas de potencia: Hotend, Ventilador0, Ventilador1)
#define BOARD_RAMPS4DUE_EEF           3018  // RAMPS4DUE (Salidas de potencia: Hotend0, Hotend1, Ventilador)
#define BOARD_RAMPS4DUE_SF            3019  // RAMPS4DUE (Salidas de potencia: Husillo, Ventilador del controlador)
#define BOARD_RURAMPS4D_11            3020  // RuRAMPS4Duo v1.1
#define BOARD_RURAMPS4D_13            3021  // RuRAMPS4Duo v1.3
#define BOARD_ULTRATRONICS_PRO        3022  // ReprapWorld Ultratronics Pro V1.0
#define BOARD_ARCHIM1                 3023  // UltiMachine Archim1 (con controladores DRV8825)
#define BOARD_ARCHIM2                 3024  // UltiMachine Archim2 (con controladores TMC2130)
#define BOARD_ALLIGATOR               3025  // Alligator Board R2
#define BOARD_CNCONTROLS_15D          3026  // Cartesio CN Controls V15 en DUE
#define BOARD_KRATOS32                3027  // K.3D Kratos32 (Arduino Due Shield)

//
// SAM3X8C ARM Cortex-M3
//

#define BOARD_PRINTRBOARD_G2          3100  // Printrboard G2
#define BOARD_ADSK                    3101  // Arduino DUE Shield Kit (ADSK)

