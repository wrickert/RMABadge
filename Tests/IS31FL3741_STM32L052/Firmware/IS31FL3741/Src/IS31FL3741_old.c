#include "main.h"

extern I2C_HandleTypeDef hi2c1;

void IS31FL3741_Init(){//I2C_HandleTypeDef *hi2c){
   HAL_I2C_Mem_Write(&hi2c1,0x60,0xFE,8,(uint8_t*)0xC5,8,100); //Command Registrer Write Lock, Enable write once
   HAL_I2C_Mem_Write(&hi2c1,0x60,0xFD,8,(uint8_t*)0x04,8,100); //Command Registrer Write Lock, Enable write once
   HAL_I2C_Mem_Write(&hi2c1,0x60,0x01,8,(uint8_t*)0xFF,8,100); //Command Registrer Write Lock, Enable write once
   HAL_I2C_Mem_Write(&hi2c1,0x60,0x00,8,(uint8_t*)0x01,8,100); //Command Registrer Write Lock, Enable write once

   
    
}


