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
L Device:LED D1
U 1 1 5CBE63F6
P 4450 2600
F 0 "D1" H 4443 2816 50  0000 C CNN
F 1 "LED" H 4443 2725 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 2600 50  0001 C CNN
F 3 "~" H 4450 2600 50  0001 C CNN
	1    4450 2600
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 5CBE68E9
P 4450 3000
F 0 "D2" H 4443 3216 50  0000 C CNN
F 1 "LED" H 4443 3125 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 3000 50  0001 C CNN
F 3 "~" H 4450 3000 50  0001 C CNN
	1    4450 3000
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D3
U 1 1 5CBE6FDD
P 4450 3400
F 0 "D3" H 4443 3616 50  0000 C CNN
F 1 "LED" H 4443 3525 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 3400 50  0001 C CNN
F 3 "~" H 4450 3400 50  0001 C CNN
	1    4450 3400
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D4
U 1 1 5CBE74EB
P 4450 3800
F 0 "D4" H 4443 4016 50  0000 C CNN
F 1 "LED" H 4443 3925 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 3800 50  0001 C CNN
F 3 "~" H 4450 3800 50  0001 C CNN
	1    4450 3800
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D5
U 1 1 5CBE7AB5
P 4450 4200
F 0 "D5" H 4443 4416 50  0000 C CNN
F 1 "LED" H 4443 4325 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 4200 50  0001 C CNN
F 3 "~" H 4450 4200 50  0001 C CNN
	1    4450 4200
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R1
U 1 1 5CBEC63D
P 4000 2600
F 0 "R1" V 3804 2600 50  0000 C CNN
F 1 "R_Small" V 3895 2600 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 2600 50  0001 C CNN
F 3 "~" H 4000 2600 50  0001 C CNN
	1    4000 2600
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R2
U 1 1 5CBECAC8
P 4000 3000
F 0 "R2" V 3804 3000 50  0000 C CNN
F 1 "R_Small" V 3895 3000 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 3000 50  0001 C CNN
F 3 "~" H 4000 3000 50  0001 C CNN
	1    4000 3000
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R3
U 1 1 5CBECE52
P 4000 3400
F 0 "R3" V 3804 3400 50  0000 C CNN
F 1 "R_Small" V 3895 3400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 3400 50  0001 C CNN
F 3 "~" H 4000 3400 50  0001 C CNN
	1    4000 3400
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R4
U 1 1 5CBED18A
P 4000 3800
F 0 "R4" V 3804 3800 50  0000 C CNN
F 1 "R_Small" V 3895 3800 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 3800 50  0001 C CNN
F 3 "~" H 4000 3800 50  0001 C CNN
	1    4000 3800
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R5
U 1 1 5CBED46E
P 4000 4200
F 0 "R5" V 3804 4200 50  0000 C CNN
F 1 "R_Small" V 3895 4200 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 4200 50  0001 C CNN
F 3 "~" H 4000 4200 50  0001 C CNN
	1    4000 4200
	0    1    1    0   
$EndComp
Text GLabel 4700 2600 2    50   Input ~ 0
a
Text GLabel 4700 3000 2    50   Input ~ 0
b
Text GLabel 4700 3400 2    50   Input ~ 0
c
Text GLabel 4700 3800 2    50   Input ~ 0
d
Text GLabel 4700 4200 2    50   Input ~ 0
e
Wire Wire Line
	4700 4200 4600 4200
Wire Wire Line
	4600 3800 4700 3800
Wire Wire Line
	4700 3400 4600 3400
Wire Wire Line
	4600 3000 4700 3000
Wire Wire Line
	4700 2600 4600 2600
Wire Wire Line
	4300 2600 4100 2600
Wire Wire Line
	4100 3000 4300 3000
Wire Wire Line
	4300 3400 4100 3400
Wire Wire Line
	4100 3800 4300 3800
Wire Wire Line
	4300 4200 4100 4200
$Comp
L power:VSS #PWR01
U 1 1 5CBEFFA7
P 3800 2600
F 0 "#PWR01" H 3800 2450 50  0001 C CNN
F 1 "VSS" V 3818 2728 50  0000 L CNN
F 2 "" H 3800 2600 50  0001 C CNN
F 3 "" H 3800 2600 50  0001 C CNN
	1    3800 2600
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR03
U 1 1 5CBF03A2
P 3800 3000
F 0 "#PWR03" H 3800 2850 50  0001 C CNN
F 1 "VSS" V 3818 3128 50  0000 L CNN
F 2 "" H 3800 3000 50  0001 C CNN
F 3 "" H 3800 3000 50  0001 C CNN
	1    3800 3000
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR04
U 1 1 5CBF07B3
P 3800 3400
F 0 "#PWR04" H 3800 3250 50  0001 C CNN
F 1 "VSS" V 3818 3528 50  0000 L CNN
F 2 "" H 3800 3400 50  0001 C CNN
F 3 "" H 3800 3400 50  0001 C CNN
	1    3800 3400
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR05
U 1 1 5CBF0C1F
P 3800 3800
F 0 "#PWR05" H 3800 3650 50  0001 C CNN
F 1 "VSS" V 3818 3928 50  0000 L CNN
F 2 "" H 3800 3800 50  0001 C CNN
F 3 "" H 3800 3800 50  0001 C CNN
	1    3800 3800
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR06
U 1 1 5CBF1129
P 3800 4200
F 0 "#PWR06" H 3800 4050 50  0001 C CNN
F 1 "VSS" V 3818 4328 50  0000 L CNN
F 2 "" H 3800 4200 50  0001 C CNN
F 3 "" H 3800 4200 50  0001 C CNN
	1    3800 4200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3800 4200 3900 4200
Wire Wire Line
	3800 3800 3900 3800
Wire Wire Line
	3900 3400 3800 3400
Wire Wire Line
	3800 3000 3900 3000
Wire Wire Line
	3900 2600 3800 2600
$Comp
L Device:LED D6
U 1 1 5CBF2932
P 4450 4600
F 0 "D6" H 4443 4816 50  0000 C CNN
F 1 "LED" H 4443 4725 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 4600 50  0001 C CNN
F 3 "~" H 4450 4600 50  0001 C CNN
	1    4450 4600
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D7
U 1 1 5CBF293C
P 4450 5000
F 0 "D7" H 4443 5216 50  0000 C CNN
F 1 "LED" H 4443 5125 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 5000 50  0001 C CNN
F 3 "~" H 4450 5000 50  0001 C CNN
	1    4450 5000
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D8
U 1 1 5CBF2946
P 4450 5400
F 0 "D8" H 4443 5616 50  0000 C CNN
F 1 "LED" H 4443 5525 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 5400 50  0001 C CNN
F 3 "~" H 4450 5400 50  0001 C CNN
	1    4450 5400
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D9
U 1 1 5CBF2950
P 4450 5800
F 0 "D9" H 4443 6016 50  0000 C CNN
F 1 "LED" H 4443 5925 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 5800 50  0001 C CNN
F 3 "~" H 4450 5800 50  0001 C CNN
	1    4450 5800
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D10
U 1 1 5CBF295A
P 4450 6200
F 0 "D10" H 4443 6416 50  0000 C CNN
F 1 "LED" H 4443 6325 50  0000 C CNN
F 2 "LEDs:LED_0805" H 4450 6200 50  0001 C CNN
F 3 "~" H 4450 6200 50  0001 C CNN
	1    4450 6200
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R6
U 1 1 5CBF2964
P 4000 4600
F 0 "R6" V 3804 4600 50  0000 C CNN
F 1 "R_Small" V 3895 4600 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 4600 50  0001 C CNN
F 3 "~" H 4000 4600 50  0001 C CNN
	1    4000 4600
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R7
U 1 1 5CBF296E
P 4000 5000
F 0 "R7" V 3804 5000 50  0000 C CNN
F 1 "R_Small" V 3895 5000 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 5000 50  0001 C CNN
F 3 "~" H 4000 5000 50  0001 C CNN
	1    4000 5000
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R8
U 1 1 5CBF2978
P 4000 5400
F 0 "R8" V 3804 5400 50  0000 C CNN
F 1 "R_Small" V 3895 5400 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 5400 50  0001 C CNN
F 3 "~" H 4000 5400 50  0001 C CNN
	1    4000 5400
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R9
U 1 1 5CBF2982
P 4000 5800
F 0 "R9" V 3804 5800 50  0000 C CNN
F 1 "R_Small" V 3895 5800 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 5800 50  0001 C CNN
F 3 "~" H 4000 5800 50  0001 C CNN
	1    4000 5800
	0    1    1    0   
$EndComp
$Comp
L Device:R_Small R10
U 1 1 5CBF298C
P 4000 6200
F 0 "R10" V 3804 6200 50  0000 C CNN
F 1 "R_Small" V 3895 6200 50  0000 C CNN
F 2 "Resistors_SMD:R_0805" H 4000 6200 50  0001 C CNN
F 3 "~" H 4000 6200 50  0001 C CNN
	1    4000 6200
	0    1    1    0   
$EndComp
Text GLabel 4700 4600 2    50   Input ~ 0
f
Text GLabel 4700 5000 2    50   Input ~ 0
g
Text GLabel 4700 5400 2    50   Input ~ 0
h
Text GLabel 4700 5800 2    50   Input ~ 0
i
Text GLabel 4700 6200 2    50   Input ~ 0
j
Wire Wire Line
	4700 6200 4600 6200
Wire Wire Line
	4600 5800 4700 5800
Wire Wire Line
	4700 5400 4600 5400
Wire Wire Line
	4600 5000 4700 5000
Wire Wire Line
	4700 4600 4600 4600
Wire Wire Line
	4300 4600 4100 4600
Wire Wire Line
	4100 5000 4300 5000
Wire Wire Line
	4300 5400 4100 5400
Wire Wire Line
	4100 5800 4300 5800
Wire Wire Line
	4300 6200 4100 6200
$Comp
L power:VSS #PWR07
U 1 1 5CBF29A5
P 3800 4600
F 0 "#PWR07" H 3800 4450 50  0001 C CNN
F 1 "VSS" V 3818 4728 50  0000 L CNN
F 2 "" H 3800 4600 50  0001 C CNN
F 3 "" H 3800 4600 50  0001 C CNN
	1    3800 4600
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR08
U 1 1 5CBF29AF
P 3800 5000
F 0 "#PWR08" H 3800 4850 50  0001 C CNN
F 1 "VSS" V 3818 5128 50  0000 L CNN
F 2 "" H 3800 5000 50  0001 C CNN
F 3 "" H 3800 5000 50  0001 C CNN
	1    3800 5000
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR09
U 1 1 5CBF29B9
P 3800 5400
F 0 "#PWR09" H 3800 5250 50  0001 C CNN
F 1 "VSS" V 3818 5528 50  0000 L CNN
F 2 "" H 3800 5400 50  0001 C CNN
F 3 "" H 3800 5400 50  0001 C CNN
	1    3800 5400
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR010
U 1 1 5CBF29C3
P 3800 5800
F 0 "#PWR010" H 3800 5650 50  0001 C CNN
F 1 "VSS" V 3818 5928 50  0000 L CNN
F 2 "" H 3800 5800 50  0001 C CNN
F 3 "" H 3800 5800 50  0001 C CNN
	1    3800 5800
	0    -1   -1   0   
$EndComp
$Comp
L power:VSS #PWR011
U 1 1 5CBF29CD
P 3800 6200
F 0 "#PWR011" H 3800 6050 50  0001 C CNN
F 1 "VSS" V 3818 6328 50  0000 L CNN
F 2 "" H 3800 6200 50  0001 C CNN
F 3 "" H 3800 6200 50  0001 C CNN
	1    3800 6200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3800 6200 3900 6200
Wire Wire Line
	3800 5800 3900 5800
Wire Wire Line
	3900 5400 3800 5400
Wire Wire Line
	3800 5000 3900 5000
Wire Wire Line
	3900 4600 3800 4600
Text GLabel 1800 3250 2    50   Input ~ 0
f
Text GLabel 1800 3150 2    50   Input ~ 0
g
Text GLabel 1800 3050 2    50   Input ~ 0
h
Text GLabel 1800 2950 2    50   Input ~ 0
i
Text GLabel 1800 2850 2    50   Input ~ 0
j
Text GLabel 1800 3750 2    50   Input ~ 0
a
Text GLabel 1800 3650 2    50   Input ~ 0
b
Text GLabel 1800 3550 2    50   Input ~ 0
c
Text GLabel 1800 3450 2    50   Input ~ 0
d
Text GLabel 1800 3350 2    50   Input ~ 0
e
$Comp
L Connector_Generic:Conn_01x11 J1
U 1 1 5CBFD421
P 1600 3250
F 0 "J1" H 1518 2525 50  0000 C CNN
F 1 "Conn_01x11" H 1518 2616 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x11_Pitch2.54mm" H 1600 3250 50  0001 C CNN
F 3 "~" H 1600 3250 50  0001 C CNN
	1    1600 3250
	-1   0    0    1   
$EndComp
$Comp
L power:VSS #PWR02
U 1 1 5CBFE0E9
P 1800 2750
F 0 "#PWR02" H 1800 2600 50  0001 C CNN
F 1 "VSS" V 1817 2878 50  0000 L CNN
F 2 "" H 1800 2750 50  0001 C CNN
F 3 "" H 1800 2750 50  0001 C CNN
	1    1800 2750
	0    1    1    0   
$EndComp
$EndSCHEMATC