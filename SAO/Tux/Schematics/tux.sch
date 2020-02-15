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
L Connector_Generic:Conn_02x03_Odd_Even J1
U 1 1 5CF14CBD
P 1850 2700
F 0 "J1" V 1946 2512 50  0000 R CNN
F 1 "Conn_02x03_Odd_Even" V 1855 2512 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x03_P2.54mm_Vertical_SMD" H 1850 2700 50  0001 C CNN
F 3 "~" H 1850 2700 50  0001 C CNN
	1    1850 2700
	0    -1   -1   0   
$EndComp
$Comp
L power:+3V3 #PWR06
U 1 1 5CF15C4F
P 1750 2900
F 0 "#PWR06" H 1750 2750 50  0001 C CNN
F 1 "+3V3" H 1765 3073 50  0000 C CNN
F 2 "" H 1750 2900 50  0001 C CNN
F 3 "" H 1750 2900 50  0001 C CNN
	1    1750 2900
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR02
U 1 1 5CF15E25
P 1750 2400
F 0 "#PWR02" H 1750 2250 50  0001 C CNN
F 1 "VSS" H 1768 2573 50  0000 C CNN
F 2 "" H 1750 2400 50  0001 C CNN
F 3 "" H 1750 2400 50  0001 C CNN
	1    1750 2400
	1    0    0    -1  
$EndComp
$Comp
L power:+3V3 #PWR07
U 1 1 5CF2CF7C
P 1350 4550
F 0 "#PWR07" H 1350 4400 50  0001 C CNN
F 1 "+3V3" H 1365 4723 50  0000 C CNN
F 2 "" H 1350 4550 50  0001 C CNN
F 3 "" H 1350 4550 50  0001 C CNN
	1    1350 4550
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR08
U 1 1 5CF3069B
P 1800 4550
F 0 "#PWR08" H 1800 4400 50  0001 C CNN
F 1 "VCC" H 1817 4723 50  0000 C CNN
F 2 "" H 1800 4550 50  0001 C CNN
F 3 "" H 1800 4550 50  0001 C CNN
	1    1800 4550
	1    0    0    -1  
$EndComp
$Comp
L power:VSS #PWR09
U 1 1 5CF30D17
P 2250 4550
F 0 "#PWR09" H 2250 4400 50  0001 C CNN
F 1 "VSS" H 2267 4723 50  0000 C CNN
F 2 "" H 2250 4550 50  0001 C CNN
F 3 "" H 2250 4550 50  0001 C CNN
	1    2250 4550
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5CF31B19
P 1350 4550
F 0 "#FLG01" H 1350 4625 50  0001 C CNN
F 1 "PWR_FLAG" H 1350 4723 50  0000 C CNN
F 2 "" H 1350 4550 50  0001 C CNN
F 3 "~" H 1350 4550 50  0001 C CNN
	1    1350 4550
	-1   0    0    1   
$EndComp
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5CF31DA6
P 1800 4550
F 0 "#FLG02" H 1800 4625 50  0001 C CNN
F 1 "PWR_FLAG" H 1800 4723 50  0000 C CNN
F 2 "" H 1800 4550 50  0001 C CNN
F 3 "~" H 1800 4550 50  0001 C CNN
	1    1800 4550
	-1   0    0    1   
$EndComp
$Comp
L power:PWR_FLAG #FLG03
U 1 1 5CF31EBB
P 2250 4550
F 0 "#FLG03" H 2250 4625 50  0001 C CNN
F 1 "PWR_FLAG" H 2250 4723 50  0000 C CNN
F 2 "" H 2250 4550 50  0001 C CNN
F 3 "~" H 2250 4550 50  0001 C CNN
	1    2250 4550
	-1   0    0    1   
$EndComp
NoConn ~ 1850 2400
NoConn ~ 1850 2900
NoConn ~ 1950 2900
NoConn ~ 1950 2400
$EndSCHEMATC