EESchema Schematic File Version 4
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_ST_STM32L0:STM32L011D4Px U1
U 1 1 5CCFB654
P 6300 3850
F 0 "U1" H 6050 3250 50  0000 C CNN
F 1 "STM32L011D4Px" H 6650 3250 50  0000 C CNN
F 2 "Package_SO:TSSOP-14_4.4x5mm_P0.65mm" H 6000 3350 50  0001 R CNN
F 3 "http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00206508.pdf" H 6300 3850 50  0001 C CNN
	1    6300 3850
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR05
U 1 1 5CCFBAB0
P 6300 4550
F 0 "#PWR05" H 6300 4400 50  0001 C CNN
F 1 "VSS" H 6318 4723 50  0000 C CNN
F 2 "" H 6300 4550 50  0001 C CNN
F 3 "" H 6300 4550 50  0001 C CNN
	1    6300 4550
	-1   0    0    1   
$EndComp
$Comp
L power:VCC #PWR04
U 1 1 5CCFBEE0
P 6300 2850
F 0 "#PWR04" H 6300 2700 50  0001 C CNN
F 1 "VCC" H 6317 3023 50  0000 C CNN
F 2 "" H 6300 2850 50  0001 C CNN
F 3 "" H 6300 2850 50  0001 C CNN
	1    6300 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 4450 6300 4550
$Comp
L Device:C_Small C3
U 1 1 5CCFC595
P 6500 3300
F 0 "C3" V 6550 3200 50  0000 C CNN
F 1 "10uF" V 6362 3300 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6500 3300 50  0001 C CNN
F 3 "~" H 6500 3300 50  0001 C CNN
	1    6500 3300
	0    1    1    0   
$EndComp
Wire Wire Line
	6300 3300 6400 3300
Connection ~ 6300 3300
Wire Wire Line
	6300 3300 6300 3350
$Comp
L power:VSS #PWR06
U 1 1 5CCFC978
P 6650 3300
F 0 "#PWR06" H 6650 3150 50  0001 C CNN
F 1 "VSS" V 6667 3428 50  0000 L CNN
F 2 "" H 6650 3300 50  0001 C CNN
F 3 "" H 6650 3300 50  0001 C CNN
	1    6650 3300
	0    1    1    0   
$EndComp
Wire Wire Line
	6650 3300 6600 3300
$Comp
L Device:C_Small C2
U 1 1 5CCFD873
P 6500 3000
F 0 "C2" V 6550 2900 50  0000 C CNN
F 1 "100nF" V 6362 3000 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6500 3000 50  0001 C CNN
F 3 "~" H 6500 3000 50  0001 C CNN
	1    6500 3000
	0    1    1    0   
$EndComp
Wire Wire Line
	6300 2850 6300 3000
Wire Wire Line
	6300 3000 6400 3000
Connection ~ 6300 3000
Wire Wire Line
	6300 3000 6300 3300
Wire Wire Line
	6600 3000 6650 3000
Wire Wire Line
	6650 3000 6650 3300
Connection ~ 6650 3300
Wire Wire Line
	5750 3250 5750 3300
Wire Wire Line
	5750 3500 5750 3550
Wire Wire Line
	5750 3550 5900 3550
$Comp
L Device:C_Small C1
U 1 1 5CD05607
P 5750 3400
F 0 "C1" H 5842 3446 50  0000 L CNN
F 1 "100nF" H 5842 3355 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5750 3400 50  0001 C CNN
F 3 "~" H 5750 3400 50  0001 C CNN
	1    5750 3400
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR03
U 1 1 5CD07B09
P 5750 3250
F 0 "#PWR03" H 5750 3100 50  0001 C CNN
F 1 "VSS" H 5767 3423 50  0000 C CNN
F 2 "" H 5750 3250 50  0001 C CNN
F 3 "" H 5750 3250 50  0001 C CNN
	1    5750 3250
	1    0    0    -1  
$EndComp
Text Notes 5600 3500 1    50   ~ 0
100nF is recommended value,\nCan be reduced to 10nF to limit pwr\nconsumption\n
Text GLabel 6750 4150 2    50   Input ~ 0
SWDIO
Wire Wire Line
	6750 4150 6700 4150
Wire Wire Line
	6700 4250 6750 4250
Text GLabel 6750 4250 2    50   Input ~ 0
SWCLK
Text GLabel 5700 3550 0    50   Input ~ 0
RST
Wire Wire Line
	5700 3550 5750 3550
Connection ~ 5750 3550
Text GLabel 6750 3550 2    50   Input ~ 0
PA0
Text GLabel 6750 3650 2    50   Input ~ 0
PA1
Text GLabel 6750 3750 2    50   Input ~ 0
PA4
Text GLabel 6750 3850 2    50   Input ~ 0
PA7
Text GLabel 6750 3950 2    50   Input ~ 0
PA9
Text GLabel 6750 4050 2    50   Input ~ 0
PA10
Wire Wire Line
	6750 4050 6700 4050
Wire Wire Line
	6700 3950 6750 3950
Wire Wire Line
	6750 3850 6700 3850
Wire Wire Line
	6700 3750 6750 3750
Wire Wire Line
	6750 3650 6700 3650
Wire Wire Line
	6700 3550 6750 3550
Text GLabel 5850 3950 0    50   Input ~ 0
PC14
Text GLabel 5850 4050 0    50   Input ~ 0
PC15
Text GLabel 5850 4250 0    50   Input ~ 0
PB9
Wire Wire Line
	5850 4250 5900 4250
Wire Wire Line
	5900 4050 5850 4050
Wire Wire Line
	5850 3950 5900 3950
$Comp
L Connector_Generic:Conn_01x03 J1
U 1 1 5CD0BE14
P 3250 3300
F 0 "J1" H 3168 2975 50  0000 C CNN
F 1 "Right" H 3168 3066 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x03_P2.54mm_Vertical" H 3250 3300 50  0001 C CNN
F 3 "~" H 3250 3300 50  0001 C CNN
	1    3250 3300
	-1   0    0    1   
$EndComp
Text GLabel 3450 3200 2    50   Input ~ 0
PA7
Text GLabel 3450 3300 2    50   Input ~ 0
PA9
Text GLabel 3450 3400 2    50   Input ~ 0
PA10
$Comp
L Connector_Generic:Conn_01x06 J2
U 1 1 5CD0E789
P 3250 4000
F 0 "J2" H 3168 3475 50  0000 C CNN
F 1 "Left" H 3168 3566 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x06_P2.54mm_Vertical" H 3250 4000 50  0001 C CNN
F 3 "~" H 3250 4000 50  0001 C CNN
	1    3250 4000
	-1   0    0    1   
$EndComp
Text GLabel 3450 4200 2    50   Input ~ 0
PA4
Text GLabel 3450 4100 2    50   Input ~ 0
PA1
Text GLabel 3450 4000 2    50   Input ~ 0
PA0
Text GLabel 3450 3900 2    50   Input ~ 0
PC15
Text GLabel 3450 3800 2    50   Input ~ 0
PC14
Text GLabel 3450 3700 2    50   Input ~ 0
PB9
$Comp
L Connector_Generic:Conn_01x05 J3
U 1 1 5CD0F7C2
P 3250 4650
F 0 "J3" H 3168 4225 50  0000 C CNN
F 1 "Prog" H 3168 4316 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 3250 4650 50  0001 C CNN
F 3 "~" H 3250 4650 50  0001 C CNN
	1    3250 4650
	-1   0    0    1   
$EndComp
Text GLabel 3450 4750 2    50   Input ~ 0
SWDIO
Text GLabel 3450 4850 2    50   Input ~ 0
SWCLK
Text GLabel 3450 4650 2    50   Input ~ 0
RST
$Comp
L power:VSS #PWR02
U 1 1 5CD11383
P 3450 4550
F 0 "#PWR02" H 3450 4400 50  0001 C CNN
F 1 "VSS" V 3467 4678 50  0000 L CNN
F 2 "" H 3450 4550 50  0001 C CNN
F 3 "" H 3450 4550 50  0001 C CNN
	1    3450 4550
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR01
U 1 1 5CD119BC
P 3450 4450
F 0 "#PWR01" H 3450 4300 50  0001 C CNN
F 1 "VCC" V 3467 4578 50  0000 L CNN
F 2 "" H 3450 4450 50  0001 C CNN
F 3 "" H 3450 4450 50  0001 C CNN
	1    3450 4450
	0    1    1    0   
$EndComp
$Comp
L power:VSS #PWR0101
U 1 1 5CD167B6
P 4050 6450
F 0 "#PWR0101" H 4050 6300 50  0001 C CNN
F 1 "VSS" V 4067 6578 50  0000 L CNN
F 2 "" H 4050 6450 50  0001 C CNN
F 3 "" H 4050 6450 50  0001 C CNN
	1    4050 6450
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR0102
U 1 1 5CD167C0
P 4050 6350
F 0 "#PWR0102" H 4050 6200 50  0001 C CNN
F 1 "VCC" V 4067 6478 50  0000 L CNN
F 2 "" H 4050 6350 50  0001 C CNN
F 3 "" H 4050 6350 50  0001 C CNN
	1    4050 6350
	0    1    1    0   
$EndComp
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5CD1792E
P 4050 6350
F 0 "#FLG0101" H 4050 6425 50  0001 C CNN
F 1 "PWR_FLAG" V 4050 6477 50  0000 L CNN
F 2 "" H 4050 6350 50  0001 C CNN
F 3 "~" H 4050 6350 50  0001 C CNN
	1    4050 6350
	0    -1   -1   0   
$EndComp
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 5CD18E71
P 4050 6450
F 0 "#FLG0102" H 4050 6525 50  0001 C CNN
F 1 "PWR_FLAG" V 4050 6577 50  0000 L CNN
F 2 "" H 4050 6450 50  0001 C CNN
F 3 "~" H 4050 6450 50  0001 C CNN
	1    4050 6450
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_DIP_x01 SW1
U 1 1 5CD1BA15
P 5200 5450
F 0 "SW1" H 5200 5717 50  0000 C CNN
F 1 "Reset" H 5200 5626 50  0000 C CNN
F 2 "Button_Switch_SMD:SW_Push_1P1T_NO_CK_KSC7xxJ" H 5200 5450 50  0001 C CNN
F 3 "~" H 5200 5450 50  0001 C CNN
	1    5200 5450
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR07
U 1 1 5CD1BCE4
P 4850 5450
F 0 "#PWR07" H 4850 5300 50  0001 C CNN
F 1 "VSS" V 4868 5578 50  0000 L CNN
F 2 "" H 4850 5450 50  0001 C CNN
F 3 "" H 4850 5450 50  0001 C CNN
	1    4850 5450
	0    -1   -1   0   
$EndComp
Text GLabel 5550 5450 2    50   Input ~ 0
RST
Wire Wire Line
	5550 5450 5500 5450
Wire Wire Line
	4900 5450 4850 5450
$EndSCHEMATC
