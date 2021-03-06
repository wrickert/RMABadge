EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
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
L BSidesIA2020:E73-2G4M08S1C U?
U 1 1 5E44AB6F
P 8650 1900
F 0 "U?" H 8625 3175 50  0000 C CNN
F 1 "E73-2G4M08S1C" H 8625 3084 50  0000 C CNN
F 2 "" H 7650 1500 50  0001 C CNN
F 3 "" H 7650 1500 50  0001 C CNN
	1    8650 1900
	1    0    0    -1  
$EndComp
$Comp
L badge-rescue:Battery_Cell BT1
U 1 1 5AD687D0
P 7050 9000
F 0 "BT1" H 7150 9100 50  0000 L CNN
F 1 "Battery_Cell" H 7150 9000 50  0000 L CNN
F 2 "Battery_Holders:Keystone_3009_1x2450-CoinCell" V 7050 9060 50  0001 C CNN
F 3 "" V 7050 9060 50  0001 C CNN
	1    7050 9000
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG03
U 1 1 5AD68B6D
P 7050 8800
F 0 "#FLG03" H 7050 8875 50  0001 C CNN
F 1 "PWR_FLAG" H 7050 8950 50  0000 C CNN
F 2 "" H 7050 8800 50  0001 C CNN
F 3 "" H 7050 8800 50  0001 C CNN
	1    7050 8800
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR07
U 1 1 5AD7EECF
P 7050 9100
F 0 "#PWR07" H 7050 8950 50  0001 C CNN
F 1 "VSS" H 7050 9250 50  0000 C CNN
F 2 "" H 7050 9100 50  0001 C CNN
F 3 "" H 7050 9100 50  0001 C CNN
	1    7050 9100
	-1   0    0    1   
$EndComp
Connection ~ 7050 8800
$Comp
L power:VDDA #PWR03
U 1 1 5C32B42E
P 7050 8800
F 0 "#PWR03" H 7050 8650 50  0001 C CNN
F 1 "VDDA" H 7067 8973 50  0000 C CNN
F 2 "" H 7050 8800 50  0001 C CNN
F 3 "" H 7050 8800 50  0001 C CNN
	1    7050 8800
	1    0    0    -1  
$EndComp
$Comp
L power:VDDA #PWR027
U 1 1 5C33B5E7
P 6350 8850
F 0 "#PWR027" H 6350 8700 50  0001 C CNN
F 1 "VDDA" V 6367 8978 50  0000 L CNN
F 2 "" H 6350 8850 50  0001 C CNN
F 3 "" H 6350 8850 50  0001 C CNN
	1    6350 8850
	0    1    1    0   
$EndComp
$Comp
L badge-rescue:C C17
U 1 1 5C33B6A8
P 6100 8700
F 0 "C17" H 6215 8746 50  0000 L CNN
F 1 "10uF" H 6215 8655 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 6138 8550 50  0001 C CNN
F 3 "" H 6100 8700 50  0001 C CNN
	1    6100 8700
	1    0    0    -1  
$EndComp
Connection ~ 6100 8850
Wire Wire Line
	6100 8850 6350 8850
Wire Wire Line
	5900 8850 6100 8850
$Comp
L power:VSS #PWR025
U 1 1 5C33F9EB
P 6100 8550
F 0 "#PWR025" H 6100 8400 50  0001 C CNN
F 1 "VSS" H 6117 8723 50  0000 C CNN
F 2 "" H 6100 8550 50  0001 C CNN
F 3 "" H 6100 8550 50  0001 C CNN
	1    6100 8550
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR021
U 1 1 5C33FAD9
P 5900 9150
F 0 "#PWR021" H 5900 9000 50  0001 C CNN
F 1 "VSS" H 5918 9323 50  0000 C CNN
F 2 "" H 5900 9150 50  0001 C CNN
F 3 "" H 5900 9150 50  0001 C CNN
	1    5900 9150
	-1   0    0    1   
$EndComp
$Comp
L badge-rescue:C C14
U 1 1 5C344660
P 4700 8650
F 0 "C14" H 4815 8696 50  0000 L CNN
F 1 "10uF" H 4815 8605 50  0000 L CNN
F 2 "Capacitors_SMD:C_0805_HandSoldering" H 4738 8500 50  0001 C CNN
F 3 "" H 4700 8650 50  0001 C CNN
	1    4700 8650
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR019
U 1 1 5C34477D
P 4700 8200
F 0 "#PWR019" H 4700 8050 50  0001 C CNN
F 1 "VSS" H 4717 8373 50  0000 C CNN
F 2 "" H 4700 8200 50  0001 C CNN
F 3 "" H 4700 8200 50  0001 C CNN
	1    4700 8200
	1    0    0    -1  
$EndComp
$Comp
L badge-rescue:R R2
U 1 1 5C37B5B5
P 6050 8950
F 0 "R2" V 6150 8950 50  0000 C CNN
F 1 "1k" V 6250 8950 50  0000 C CNN
F 2 "Resistors_SMD:R_0805_HandSoldering" V 5980 8950 50  0001 C CNN
F 3 "" H 6050 8950 50  0001 C CNN
	1    6050 8950
	0    -1   1    0   
$EndComp
$Comp
L power:VSS #PWR030
U 1 1 5C37B705
P 6200 8950
F 0 "#PWR030" H 6200 8800 50  0001 C CNN
F 1 "VSS" H 6218 9123 50  0000 C CNN
F 2 "" H 6200 8950 50  0001 C CNN
F 3 "" H 6200 8950 50  0001 C CNN
	1    6200 8950
	1    0    0    1   
$EndComp
Wire Wire Line
	5000 8800 5000 8850
$Comp
L power:VSS #PWR05
U 1 1 5C7050D7
P 5000 9150
F 0 "#PWR05" H 5000 9000 50  0001 C CNN
F 1 "VSS" H 5018 9323 50  0000 C CNN
F 2 "" H 5000 9150 50  0001 C CNN
F 3 "" H 5000 9150 50  0001 C CNN
	1    5000 9150
	-1   0    0    1   
$EndComp
NoConn ~ 5000 9050
$Comp
L Device:R_Small R5
U 1 1 5C9B4547
P 4700 8350
F 0 "R5" H 4759 8396 50  0000 L CNN
F 1 "1.5" H 4759 8305 50  0000 L CNN
F 2 "Resistors_SMD:R_0805" H 4700 8350 50  0001 C CNN
F 3 "~" H 4700 8350 50  0001 C CNN
	1    4700 8350
	1    0    0    -1  
$EndComp
Wire Wire Line
	4700 8250 4700 8200
Wire Wire Line
	4700 8500 4700 8450
$Comp
L power:+5V #PWR013
U 1 1 5D03CE40
P 1950 1000
F 0 "#PWR013" H 1950 850 50  0001 C CNN
F 1 "+5V" V 1965 1128 50  0000 L CNN
F 2 "" H 1950 1000 50  0001 C CNN
F 3 "" H 1950 1000 50  0001 C CNN
	1    1950 1000
	1    0    0    -1  
$EndComp
Text GLabel 1950 1700 2    50   Input ~ 0
D+
Text GLabel 1950 1600 2    50   Input ~ 0
D-
$Comp
L Connector:USB_C_Receptacle J7
U 1 1 5D280865
P 1300 2000
F 0 "J7" H 1407 3267 50  0000 C CNN
F 1 "USB_C_Receptacle" H 1407 3176 50  0000 C CNN
F 2 "Tests:USB_C_Receptical-Jing" H 1450 2000 50  0001 C CNN
F 3 "https://www.usb.org/sites/default/files/documents/usb_type-c.zip" H 1450 2000 50  0001 C CNN
	1    1300 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	1000 3600 1000 3800
Connection ~ 1000 3600
Wire Wire Line
	1950 1000 1900 1000
Wire Wire Line
	1900 1600 1950 1600
Wire Wire Line
	1900 1700 1950 1700
Wire Wire Line
	1900 1200 2000 1200
Wire Wire Line
	1900 1300 2000 1300
Wire Wire Line
	1000 3600 1300 3600
Wire Wire Line
	1900 1600 1900 1500
Connection ~ 1900 1600
Wire Wire Line
	1900 1700 1900 1800
Connection ~ 1900 1700
NoConn ~ 1900 2000
NoConn ~ 1900 2100
NoConn ~ 1900 2300
NoConn ~ 1900 2400
NoConn ~ 1900 2600
NoConn ~ 1900 2700
NoConn ~ 1900 2900
NoConn ~ 1900 3000
NoConn ~ 1900 3200
NoConn ~ 1900 3300
$Comp
L Switch:SW_SPDT Power->1
U 1 1 5D2DB038
P 8100 8700
F 0 "Power->1" H 8100 8985 50  0000 C CNN
F 1 "SW3" H 8100 8894 50  0000 C CNN
F 2 "BreadBoardPwr:SK-3296S_switch" H 8100 8700 50  0001 C CNN
F 3 "~" H 8100 8700 50  0001 C CNN
	1    8100 8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	8300 8600 8350 8600
$Comp
L power:VSS #PWR0104
U 1 1 5D1999D7
P 1000 3800
F 0 "#PWR0104" H 1000 3650 50  0001 C CNN
F 1 "VSS" H 1018 3973 50  0000 C CNN
F 2 "" H 1000 3800 50  0001 C CNN
F 3 "" H 1000 3800 50  0001 C CNN
	1    1000 3800
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR03
U 1 1 5D1B3B13
P 2500 1200
F 0 "#PWR03" H 2500 1050 50  0001 C CNN
F 1 "VSS" H 2518 1373 50  0000 C CNN
F 2 "" H 2500 1200 50  0001 C CNN
F 3 "" H 2500 1200 50  0001 C CNN
	1    2500 1200
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR0127
U 1 1 5CFD9E8E
P 1100 6350
F 0 "#PWR0127" H 1100 6200 50  0001 C CNN
F 1 "VCC" V 1117 6478 50  0000 L CNN
F 2 "" H 1100 6350 50  0001 C CNN
F 3 "" H 1100 6350 50  0001 C CNN
	1    1100 6350
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR0128
U 1 1 5CFDA72D
P 1200 6350
F 0 "#PWR0128" H 1200 6200 50  0001 C CNN
F 1 "VSS" V 1217 6478 50  0000 L CNN
F 2 "" H 1200 6350 50  0001 C CNN
F 3 "" H 1200 6350 50  0001 C CNN
	1    1200 6350
	1    0    0    -1  
$EndComp
Text GLabel 1100 6950 3    50   Input ~ 0
SWDIO
Text GLabel 1200 6950 3    50   Input ~ 0
SWCLK
$Comp
L Device:LED D2
U 1 1 5CDED87C
P 3850 2000
F 0 "D2" H 3843 1745 50  0000 C CNN
F 1 "LED" H 3843 1836 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric" H 3850 2000 50  0001 C CNN
F 3 "~" H 3850 2000 50  0001 C CNN
	1    3850 2000
	1    0    0    -1  
$EndComp
Text GLabel 4450 2600 2    50   Input ~ 0
Eye
$Comp
L Device:LED_ALT D3
U 1 1 5D9A3C36
P 3850 2600
F 0 "D3" H 3843 2816 50  0000 C CNN
F 1 "LED_ALT" H 3843 2725 50  0000 C CNN
F 2 "Dragos:T776-ReverseMountLED" H 3850 2600 50  0001 C CNN
F 3 "~" H 3850 2600 50  0001 C CNN
	1    3850 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R14
U 1 1 5D9A4C20
P 4200 2600
F 0 "R14" V 4004 2600 50  0000 C CNN
F 1 "1k" V 4095 2600 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" H 4200 2600 50  0001 C CNN
F 3 "~" H 4200 2600 50  0001 C CNN
	1    4200 2600
	0    1    1    0   
$EndComp
$Comp
L power:VSS #PWR0145
U 1 1 5D9A582E
P 3600 2600
F 0 "#PWR0145" H 3600 2450 50  0001 C CNN
F 1 "VSS" V 3618 2728 50  0000 L CNN
F 2 "" H 3600 2600 50  0001 C CNN
F 3 "" H 3600 2600 50  0001 C CNN
	1    3600 2600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3600 2600 3700 2600
Wire Wire Line
	4000 2600 4100 2600
Wire Wire Line
	4300 2600 4450 2600
Text Notes 3450 2300 0    50   ~ 0
Eye Light, Reverse mount LED
$Comp
L dragos-rescue:K1-5202UA-03(5Way_Switch)-Dragos U5
U 1 1 5D705426
P 4150 3500
F 0 "U5" H 4150 3975 50  0000 C CNN
F 1 "K1-5202UA-03(5Way_Switch)" H 4150 3884 50  0000 C CNN
F 2 "Dragos:K1-5202UA-03(5way-switch)" H 3800 3150 50  0001 C CNN
F 3 "" H 3800 3150 50  0001 C CNN
	1    4150 3500
	1    0    0    -1  
$EndComp
Text GLabel 3800 3250 0    50   Input ~ 0
Left
Text GLabel 3800 3350 0    50   Input ~ 0
Center
Text GLabel 3800 3450 0    50   Input ~ 0
Down
Text GLabel 3800 3750 0    50   Input ~ 0
Right
$Comp
L power:VSS #PWR0146
U 1 1 5D7338F5
P 4500 3650
F 0 "#PWR0146" H 4500 3500 50  0001 C CNN
F 1 "VSS" V 4518 3778 50  0000 L CNN
F 2 "" H 4500 3650 50  0001 C CNN
F 3 "" H 4500 3650 50  0001 C CNN
	1    4500 3650
	0    1    1    0   
$EndComp
$Comp
L Switch:SW_DIP_x01 SW2
U 1 1 5D74F880
P 4100 4150
F 0 "SW2" H 4100 4417 50  0000 C CNN
F 1 "SW_DIP_x01" H 4100 4326 50  0000 C CNN
F 2 "Dragos:1TS002E-2500-2500-CT-HYP-Button" H 4100 4150 50  0001 C CNN
F 3 "~" H 4100 4150 50  0001 C CNN
	1    4100 4150
	-1   0    0    1   
$EndComp
Wire Wire Line
	3750 4150 3800 4150
$Comp
L power:VSS #PWR0147
U 1 1 5D74F88B
P 4500 4150
F 0 "#PWR0147" H 4500 4000 50  0001 C CNN
F 1 "VSS" V 4518 4278 50  0000 L CNN
F 2 "" H 4500 4150 50  0001 C CNN
F 3 "" H 4500 4150 50  0001 C CNN
	1    4500 4150
	0    1    1    0   
$EndComp
Wire Wire Line
	4500 4150 4400 4150
Text GLabel 3750 4150 0    50   Input ~ 0
ButtonB
Text GLabel 3750 4700 0    50   Input ~ 0
ButtonA
$Comp
L Switch:SW_DIP_x01 SW4
U 1 1 5D7857CD
P 4100 4700
F 0 "SW4" H 4100 4967 50  0000 C CNN
F 1 "SW_DIP_x01" H 4100 4876 50  0000 C CNN
F 2 "Dragos:1TS002E-2500-2500-CT-HYP-Button" H 4100 4700 50  0001 C CNN
F 3 "~" H 4100 4700 50  0001 C CNN
	1    4100 4700
	-1   0    0    1   
$EndComp
Wire Wire Line
	3750 4700 3800 4700
$Comp
L power:VSS #PWR0148
U 1 1 5D7857D8
P 4500 4700
F 0 "#PWR0148" H 4500 4550 50  0001 C CNN
F 1 "VSS" V 4518 4828 50  0000 L CNN
F 2 "" H 4500 4700 50  0001 C CNN
F 3 "" H 4500 4700 50  0001 C CNN
	1    4500 4700
	0    1    1    0   
$EndComp
Wire Wire Line
	4500 4700 4400 4700
$Comp
L Device:R_Pack02 RN1
U 1 1 5D75E08C
P 2200 1300
F 0 "RN1" V 1883 1300 50  0000 C CNN
F 1 "10k" V 1974 1300 50  0000 C CNN
F 2 "Resistor_SMD:R_Array_Concave_2x0603" V 2375 1300 50  0001 C CNN
F 3 "~" H 2200 1300 50  0001 C CNN
	1    2200 1300
	0    1    1    0   
$EndComp
Wire Wire Line
	2400 1300 2400 1200
Wire Wire Line
	2400 1200 2500 1200
Connection ~ 2400 1200
$Comp
L Device:C_Small C1
U 1 1 5DA07B90
P 9500 2300
F 0 "C1" H 9592 2346 50  0000 L CNN
F 1 "4.7uF" H 9592 2255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 9500 2300 50  0001 C CNN
F 3 "~" H 9500 2300 50  0001 C CNN
	1    9500 2300
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR02
U 1 1 5DA0A6BA
P 9750 2450
F 0 "#PWR02" H 9750 2300 50  0001 C CNN
F 1 "VCC" V 9767 2578 50  0000 L CNN
F 2 "" H 9750 2450 50  0001 C CNN
F 3 "" H 9750 2450 50  0001 C CNN
	1    9750 2450
	0    1    1    0   
$EndComp
$Comp
L power:VSS #PWR01
U 1 1 5DA0AE65
P 9650 2300
F 0 "#PWR01" H 9650 2150 50  0001 C CNN
F 1 "VSS" H 9667 2473 50  0000 C CNN
F 2 "" H 9650 2300 50  0001 C CNN
F 3 "" H 9650 2300 50  0001 C CNN
	1    9650 2300
	0    1    1    0   
$EndComp
Wire Wire Line
	9150 2850 9300 2850
Wire Wire Line
	9300 2850 9300 3050
$Comp
L power:VSS #PWR06
U 1 1 5DA0EC37
P 9300 3050
F 0 "#PWR06" H 9300 2900 50  0001 C CNN
F 1 "VSS" H 9318 3223 50  0000 C CNN
F 2 "" H 9300 3050 50  0001 C CNN
F 3 "" H 9300 3050 50  0001 C CNN
	1    9300 3050
	-1   0    0    1   
$EndComp
Wire Wire Line
	7800 8700 7900 8700
$Comp
L power:VDD #PWR011
U 1 1 5DA1787C
P 8350 8800
F 0 "#PWR011" H 8350 8650 50  0001 C CNN
F 1 "VDD" V 8367 8928 50  0000 L CNN
F 2 "" H 8350 8800 50  0001 C CNN
F 3 "" H 8350 8800 50  0001 C CNN
	1    8350 8800
	0    1    1    0   
$EndComp
$Comp
L Regulator_Linear:TLV1117-33 U2
U 1 1 5DA1AE65
P 9650 8800
F 0 "U2" H 9650 9042 50  0000 C CNN
F 1 "TLV1117-33" H 9650 8951 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-223-3_TabPin2" H 9650 8800 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/tlv1117.pdf" H 9650 8800 50  0001 C CNN
	1    9650 8800
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C2
U 1 1 5DA1D250
P 9200 8900
F 0 "C2" H 9108 8854 50  0000 R CNN
F 1 "1uF" H 9108 8945 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 9200 8900 50  0001 C CNN
F 3 "~" H 9200 8900 50  0001 C CNN
	1    9200 8900
	-1   0    0    1   
$EndComp
$Comp
L Device:C_Small C3
U 1 1 5DA1E361
P 10050 8900
F 0 "C3" H 9958 8854 50  0000 R CNN
F 1 "1uF" H 9958 8945 50  0000 R CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 10050 8900 50  0001 C CNN
F 3 "~" H 10050 8900 50  0001 C CNN
	1    10050 8900
	-1   0    0    1   
$EndComp
Wire Wire Line
	9950 8800 10050 8800
Connection ~ 10050 8800
Wire Wire Line
	10050 8800 10200 8800
Wire Wire Line
	9100 8800 9200 8800
Connection ~ 9200 8800
Wire Wire Line
	9200 8800 9350 8800
$Comp
L power:VSS #PWR016
U 1 1 5DA21D6F
P 9200 9050
F 0 "#PWR016" H 9200 8900 50  0001 C CNN
F 1 "VSS" H 9218 9223 50  0000 C CNN
F 2 "" H 9200 9050 50  0001 C CNN
F 3 "" H 9200 9050 50  0001 C CNN
	1    9200 9050
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR018
U 1 1 5DA221AF
P 9650 9150
F 0 "#PWR018" H 9650 9000 50  0001 C CNN
F 1 "VSS" H 9668 9323 50  0000 C CNN
F 2 "" H 9650 9150 50  0001 C CNN
F 3 "" H 9650 9150 50  0001 C CNN
	1    9650 9150
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR017
U 1 1 5DA22603
P 10050 9050
F 0 "#PWR017" H 10050 8900 50  0001 C CNN
F 1 "VSS" H 10068 9223 50  0000 C CNN
F 2 "" H 10050 9050 50  0001 C CNN
F 3 "" H 10050 9050 50  0001 C CNN
	1    10050 9050
	-1   0    0    1   
$EndComp
Wire Wire Line
	10050 9050 10050 9000
Wire Wire Line
	9650 9150 9650 9100
Wire Wire Line
	9200 9050 9200 9000
$Comp
L power:+3.3V #PWR012
U 1 1 5DA271B3
P 8350 8600
F 0 "#PWR012" H 8350 8450 50  0001 C CNN
F 1 "+3.3V" V 8365 8728 50  0000 L CNN
F 2 "" H 8350 8600 50  0001 C CNN
F 3 "" H 8350 8600 50  0001 C CNN
	1    8350 8600
	0    1    1    0   
$EndComp
Wire Wire Line
	8350 8800 8300 8800
Text GLabel 9200 1650 2    50   Input ~ 0
SWDIO
Text GLabel 9200 1850 2    50   Input ~ 0
SWCLK
Text GLabel 9450 850  2    50   Input ~ 0
D-
Text GLabel 9450 1050 2    50   Input ~ 0
D+
$Comp
L power:VCC #PWR05
U 1 1 5D9F7374
P 3600 1350
F 0 "#PWR05" H 3600 1200 50  0001 C CNN
F 1 "VCC" V 3617 1478 50  0000 L CNN
F 2 "" H 3600 1350 50  0001 C CNN
F 3 "" H 3600 1350 50  0001 C CNN
	1    3600 1350
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3650 1350 3600 1350
$Comp
L Device:R_Pack04 RN3
U 1 1 5D9FA1C6
P 4500 1450
F 0 "RN3" V 4083 1450 50  0000 C CNN
F 1 "270" V 4174 1450 50  0000 C CNN
F 2 "Resistor_SMD:R_Array_Convex_4x0603" V 4775 1450 50  0001 C CNN
F 3 "~" H 4500 1450 50  0001 C CNN
	1    4500 1450
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3600 2000 3700 2000
$Comp
L dragos-rescue:Conn_01x04-badge-rescue J2
U 1 1 5DA2C918
P 1050 5650
F 0 "J2" H 968 5225 50  0000 C CNN
F 1 "Oled" H 968 5316 50  0000 C CNN
F 2 "Dragos:Oled" H 1050 5650 50  0001 C CNN
F 3 "" H 1050 5650 50  0001 C CNN
	1    1050 5650
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR08
U 1 1 5DA2D891
P 1300 5750
F 0 "#PWR08" H 1300 5600 50  0001 C CNN
F 1 "VSS" V 1318 5878 50  0000 L CNN
F 2 "" H 1300 5750 50  0001 C CNN
F 3 "" H 1300 5750 50  0001 C CNN
	1    1300 5750
	0    1    1    0   
$EndComp
$Comp
L power:VCC #PWR07
U 1 1 5DA2E4B7
P 1300 5650
F 0 "#PWR07" H 1300 5500 50  0001 C CNN
F 1 "VCC" V 1317 5778 50  0000 L CNN
F 2 "" H 1300 5650 50  0001 C CNN
F 3 "" H 1300 5650 50  0001 C CNN
	1    1300 5650
	0    1    1    0   
$EndComp
Text GLabel 1250 5550 2    50   Input ~ 0
SCL
Text GLabel 1250 5450 2    50   Input ~ 0
SDA
Wire Wire Line
	1250 5650 1300 5650
Wire Wire Line
	1250 5750 1300 5750
$Comp
L Device:LED_BGRA D1
U 1 1 5DA7D107
P 3850 1350
F 0 "D1" H 3850 883 50  0000 C CNN
F 1 "LED_BGRA" H 3850 974 50  0000 C CNN
F 2 "Dragos:EKINGLUX-E6" H 3850 1300 50  0001 C CNN
F 3 "~" H 3850 1300 50  0001 C CNN
	1    3850 1350
	-1   0    0    1   
$EndComp
Text GLabel 7450 2050 0    50   Input ~ 0
Red
Text GLabel 7450 1850 0    50   Input ~ 0
Green
Text GLabel 7450 1650 0    50   Input ~ 0
Blue
Text GLabel 4750 1550 2    50   Input ~ 0
Red
Text GLabel 4750 1450 2    50   Input ~ 0
Green
Text GLabel 4750 1350 2    50   Input ~ 0
Blue
Wire Wire Line
	4750 1450 4700 1450
Wire Wire Line
	4700 1550 4750 1550
Wire Wire Line
	4750 1650 4700 1650
Wire Wire Line
	4300 1350 4250 1350
Wire Wire Line
	4250 1350 4250 1150
Wire Wire Line
	4250 1150 4050 1150
Wire Wire Line
	4300 1450 4150 1450
Wire Wire Line
	4150 1450 4150 1350
Wire Wire Line
	4150 1350 4050 1350
Wire Wire Line
	4300 1550 4050 1550
Wire Wire Line
	4300 1650 4150 1650
Wire Wire Line
	4150 1650 4150 2000
Wire Wire Line
	4150 2000 4000 2000
Text GLabel 4750 1650 2    50   Input ~ 0
Attention
Wire Wire Line
	4700 1350 4750 1350
Text GLabel 1300 6950 3    50   Input ~ 0
P0.18
Text GLabel 1400 6950 3    50   Input ~ 0
P0.23
Text GLabel 1300 6350 1    50   Input ~ 0
P1.04
Text GLabel 1400 6350 1    50   Input ~ 0
P1.03
Wire Wire Line
	1100 6900 1100 6950
Wire Wire Line
	1200 6950 1200 6900
Wire Wire Line
	1300 6900 1300 6950
Wire Wire Line
	1400 6950 1400 6900
Wire Wire Line
	1100 6400 1100 6350
Wire Wire Line
	1200 6350 1200 6400
Wire Wire Line
	1300 6350 1300 6400
Wire Wire Line
	1400 6350 1400 6400
$Comp
L Connector_Generic:Conn_02x04_Odd_Even J4
U 1 1 5DB5CC3B
P 1200 6700
F 0 "J4" V 1296 6412 50  0000 R CNN
F 1 "Conn_02x04_Odd_Even" V 1205 6412 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x04_P2.54mm_Vertical" H 1200 6700 50  0001 C CNN
F 3 "~" H 1200 6700 50  0001 C CNN
	1    1200 6700
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR0103
U 1 1 5DA443D6
P 3600 2000
F 0 "#PWR0103" H 3600 1850 50  0001 C CNN
F 1 "VSS" V 3618 2128 50  0000 L CNN
F 2 "" H 3600 2000 50  0001 C CNN
F 3 "" H 3600 2000 50  0001 C CNN
	1    3600 2000
	0    -1   -1   0   
$EndComp
Text GLabel 3800 3550 0    50   Input ~ 0
Up
$Comp
L power:+5V #PWR0102
U 1 1 5DAA8DF2
P 9650 2800
F 0 "#PWR0102" H 9650 2650 50  0001 C CNN
F 1 "+5V" V 9665 2928 50  0000 L CNN
F 2 "" H 9650 2800 50  0001 C CNN
F 3 "" H 9650 2800 50  0001 C CNN
	1    9650 2800
	0    1    1    0   
$EndComp
Wire Wire Line
	9500 2800 9650 2800
$Comp
L dragos-rescue:Conn_01x02-badge-rescue J1
U 1 1 5DAB1D17
P 1050 4750
F 0 "J1" H 968 4425 50  0000 C CNN
F 1 "Conn_01x02" H 968 4516 50  0000 C CNN
F 2 "" H 1050 4750 50  0001 C CNN
F 3 "" H 1050 4750 50  0001 C CNN
	1    1050 4750
	-1   0    0    1   
$EndComp
$Comp
L power:VDD #PWR0105
U 1 1 5DAB203E
P 1300 4650
F 0 "#PWR0105" H 1300 4500 50  0001 C CNN
F 1 "VDD" H 1317 4823 50  0000 C CNN
F 2 "" H 1300 4650 50  0001 C CNN
F 3 "" H 1300 4650 50  0001 C CNN
	1    1300 4650
	0    1    1    0   
$EndComp
$Comp
L power:VSS #PWR0106
U 1 1 5DAB2353
P 1300 4800
F 0 "#PWR0106" H 1300 4650 50  0001 C CNN
F 1 "VSS" H 1318 4973 50  0000 C CNN
F 2 "" H 1300 4800 50  0001 C CNN
F 3 "" H 1300 4800 50  0001 C CNN
	1    1300 4800
	0    1    1    0   
$EndComp
Wire Wire Line
	1250 4650 1300 4650
Wire Wire Line
	1250 4750 1300 4750
Wire Wire Line
	1300 4750 1300 4800
$Comp
L badge-rescue:HX4056 U3
U 1 1 5C6DE973
P 5500 8950
F 0 "U3" H 5450 9275 50  0000 C CNN
F 1 "HX4056" H 5450 9184 50  0000 C CNN
F 2 "Badge:HX4056" H 5400 8950 50  0001 C CNN
F 3 "" H 5400 8950 50  0001 C CNN
	1    5500 8950
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R?
U 1 1 5E596FCD
P 9300 850
F 0 "R?" V 9104 850 50  0000 C CNN
F 1 "27Ohm" V 9195 850 50  0000 C CNN
F 2 "" H 9300 850 50  0001 C CNN
F 3 "~" H 9300 850 50  0001 C CNN
	1    9300 850 
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R?
U 1 1 5E597147
P 9300 1050
F 0 "R?" V 9104 1050 50  0000 C CNN
F 1 "27Ohm" V 9195 1050 50  0000 C CNN
F 2 "" H 9300 1050 50  0001 C CNN
F 3 "~" H 9300 1050 50  0001 C CNN
	1    9300 1050
	0    1    1    0   
$EndComp
Wire Wire Line
	9450 1050 9400 1050
Wire Wire Line
	9400 850  9450 850 
Wire Wire Line
	9150 850  9200 850 
Wire Wire Line
	9150 1050 9200 1050
Wire Wire Line
	9150 1650 9200 1650
Wire Wire Line
	9150 1850 9200 1850
Wire Wire Line
	9600 2300 9650 2300
Wire Wire Line
	9150 2450 9350 2450
Wire Wire Line
	9400 2300 9350 2300
Wire Wire Line
	9350 2300 9350 2450
Connection ~ 9350 2450
Wire Wire Line
	9350 2450 9750 2450
$Comp
L power:VDDA #PWR?
U 1 1 5E5CCB63
P 7800 8700
F 0 "#PWR?" H 7800 8550 50  0001 C CNN
F 1 "VDDA" V 7817 8828 50  0000 L CNN
F 2 "" H 7800 8700 50  0001 C CNN
F 3 "" H 7800 8700 50  0001 C CNN
	1    7800 8700
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR?
U 1 1 5E5CF4A5
P 10200 8800
F 0 "#PWR?" H 10200 8650 50  0001 C CNN
F 1 "VCC" V 10217 8928 50  0000 L CNN
F 2 "" H 10200 8800 50  0001 C CNN
F 3 "" H 10200 8800 50  0001 C CNN
	1    10200 8800
	0    1    1    0   
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5E5D72E0
P 4550 8800
F 0 "#PWR?" H 4550 8650 50  0001 C CNN
F 1 "+5V" V 4565 8928 50  0000 L CNN
F 2 "" H 4550 8800 50  0001 C CNN
F 3 "" H 4550 8800 50  0001 C CNN
	1    4550 8800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4550 8800 4700 8800
Connection ~ 4700 8800
Wire Wire Line
	4700 8800 5000 8800
NoConn ~ 5000 8950
$Comp
L Keyboard:BBQ10KBD U?
U 1 1 5E6291CB
P 10350 5200
F 0 "U?" H 10350 6087 60  0000 C CNN
F 1 "BBQ10KBD" H 10350 5981 60  0000 C CNN
F 2 "" H 10350 4850 60  0001 C CNN
F 3 "" H 10350 4850 60  0001 C CNN
	1    10350 5200
	1    0    0    -1  
$EndComp
$Comp
L power:VDD #PWR?
U 1 1 5E6816D7
P 9100 8800
F 0 "#PWR?" H 9100 8650 50  0001 C CNN
F 1 "VDD" V 9117 8928 50  0000 L CNN
F 2 "" H 9100 8800 50  0001 C CNN
F 3 "" H 9100 8800 50  0001 C CNN
	1    9100 8800
	0    -1   -1   0   
$EndComp
Text GLabel 10950 4600 2    50   Input ~ 0
COL1
Text GLabel 10950 4700 2    50   Input ~ 0
COL2
Text GLabel 10950 4800 2    50   Input ~ 0
COL3
Text GLabel 10950 4900 2    50   Input ~ 0
COL4
Text GLabel 10950 5000 2    50   Input ~ 0
COL5
Text GLabel 10950 5200 2    50   Input ~ 0
ROW1
Text GLabel 10950 5300 2    50   Input ~ 0
ROW2
Text GLabel 10950 5400 2    50   Input ~ 0
ROW3
Text GLabel 10950 5500 2    50   Input ~ 0
ROW4
Text GLabel 10950 5600 2    50   Input ~ 0
ROW5
Text GLabel 10950 5700 2    50   Input ~ 0
ROW6
Text GLabel 10950 5800 2    50   Input ~ 0
ROW7
$Comp
L power:VSS #PWR?
U 1 1 5E688988
P 9350 5800
F 0 "#PWR?" H 9350 5650 50  0001 C CNN
F 1 "VSS" H 9368 5973 50  0000 C CNN
F 2 "" H 9350 5800 50  0001 C CNN
F 3 "" H 9350 5800 50  0001 C CNN
	1    9350 5800
	-1   0    0    1   
$EndComp
$Comp
L Device:L_Small L?
U 1 1 5E688EE2
P 9550 5700
F 0 "L?" V 9369 5700 50  0000 C CNN
F 1 "L_Small" V 9460 5700 50  0000 C CNN
F 2 "" H 9550 5700 50  0001 C CNN
F 3 "~" H 9550 5700 50  0001 C CNN
	1    9550 5700
	0    1    1    0   
$EndComp
Wire Wire Line
	9350 5800 9350 5700
Wire Wire Line
	9350 5700 9450 5700
Wire Wire Line
	9650 5700 9750 5700
Wire Wire Line
	9750 5800 9350 5800
Connection ~ 9350 5800
Text GLabel 9750 4800 0    50   Input ~ 0
LEDA1
Text GLabel 9750 4900 0    50   Input ~ 0
LEDA2
Text GLabel 9750 5000 0    50   Input ~ 0
LEDK1
Text GLabel 9750 5100 0    50   Input ~ 0
LEDK2
$Comp
L power:VCC #PWR?
U 1 1 5E692E56
P 9650 4600
F 0 "#PWR?" H 9650 4450 50  0001 C CNN
F 1 "VCC" V 9667 4728 50  0000 L CNN
F 2 "" H 9650 4600 50  0001 C CNN
F 3 "" H 9650 4600 50  0001 C CNN
	1    9650 4600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	9650 4600 9750 4600
Text GLabel 9750 5300 0    50   Input ~ 0
MIC
$EndSCHEMATC
