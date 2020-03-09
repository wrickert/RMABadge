//Charlieplexing Library
//William Rickert March2020

extern int stopFlag;
extern int minuteFlag;
extern int hourFlag;

void charlie(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int pos);
void hands(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int hours, int minutes);

// Function to get current time and determine what to display
void clock(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, RTC_HandleTypeDef whatTime){
   RTC_TimeTypeDef RTCtime;
   RTC_DateTypeDef RTCdate;
   HAL_RTC_GetTime(&whatTime, &RTCtime, RTC_FORMAT_BIN);
   HAL_RTC_GetDate(&whatTime, &RTCdate, RTC_FORMAT_BIN);

   int minutes = RTCtime.Minutes;
   int hours = RTCtime.Hours;
   int displayMin = 0;

   char buf[20];
   sprintf(buf, "Current time is %d:%d\n",hours,minutes);
   say(buf);

   if(minutes > 0 && minutes < 3)
      displayMin = 12;
   else if(minutes > 3 && minutes < 7)
      displayMin = 1;
   else if(minutes > 7 && minutes < 12)
      displayMin = 2;
   else if(minutes > 12 && minutes < 17)
      displayMin = 3;
   else if(minutes > 17 && minutes < 22)
      displayMin = 4;
   else if(minutes > 22 && minutes < 27)
      displayMin = 5;
   else if(minutes > 27 && minutes < 32)
      displayMin = 6;
   else if(minutes > 32 && minutes < 37)
      displayMin = 7;
   else if(minutes > 37 && minutes < 42)
      displayMin = 8;
   else if(minutes > 42 && minutes < 47)
      displayMin = 9;
   else if(minutes > 47 && minutes < 52)
      displayMin = 10;
   else if(minutes > 52 && minutes < 57)
      displayMin = 11;
   else if(minutes > 57 && minutes < 61)
      displayMin = 12;

   hands(PinA, PinB, PinC, PinD, hours, displayMin);
   
}

// Function to display current time
void hands(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int hours, int minutes){

//   say("in hands");
   for(int i = 0; i < 100; i++){

      for(int j = 0; j < 10; j++){
 //     say("first\n");
         charlie(PinA, PinB, PinC, PinD, hours);
         HAL_Delay(100);
         if(stopFlag == 1 || minutes == 1 || hours == 1)
            return;
      }
      for(int k = 0; k < 500; k++){
 //     say("second\n");
         charlie(PinA, PinB, PinC, PinD, hours);
         charlie(PinA, PinB, PinC, PinD, minutes);
         if(stopFlag == 1 || minutes == 1 || hours == 1)
            return;
      }
   }
}

void dance(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int mambo){
   // Off
   if(mambo == 0){
       charlie(PinA, PinB, PinC, PinD, 0);
   }

   // Slow Spin
   if(mambo == 1){
       charlie(PinA, PinB, PinC, PinD, 0);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 1);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 2);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 3);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 4);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 5);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 6);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 7);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 8);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 9);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 10);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 11);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 12);
       if(stopFlag == 1)
         return;
       HAL_Delay(1000);
   }

   // Fast Spin
   if(mambo == 2){
       charlie(PinA, PinB, PinC, PinD, 0);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 1);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 2);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 3);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 4);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 5);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 6);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 7);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 8);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 9);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 10);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 11);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 12);
       if(stopFlag == 1)
         return;
       HAL_Delay(500);
   }

   // POV light up all lights
   if(mambo == 3){
      charlie(PinA, PinB, PinC, PinD, 0);
      for(int i=0; i<10000; i++){
         for(int j=1; j<=12; j++){
             charlie(PinA, PinB, PinC, PinD, j);
       //      HAL_Delay(1);
             if(stopFlag == 1)
               return;
            
         } 
      }
   } 

   // Doubles
   if(mambo == 4){
      for(int i =1; i<=7; i++){
         if(i == 1){
            charlie(PinA, PinB, PinC, PinD, 12);
            HAL_Delay(500);
            if(stopFlag == 1)
               return;
         }
         if(i == 2){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 11);
               charlie(PinA, PinB, PinC, PinD, 1);
               if(stopFlag == 1)
                  return;
            }
            HAL_Delay(10);
         }
         if(i == 3){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 2);
               charlie(PinA, PinB, PinC, PinD, 10);
               if(stopFlag == 1)
                  return;
            }
         }
         if(i == 4){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 3);
               charlie(PinA, PinB, PinC, PinD, 9);
               if(stopFlag == 1)
                  return;
            }
         }
         if(i == 5){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 4);
               charlie(PinA, PinB, PinC, PinD, 8);
               if(stopFlag == 1)
                  return;
            }
         }
         if(i == 6){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 5);
               charlie(PinA, PinB, PinC, PinD, 7);
               if(stopFlag == 1)
                  return;
            }
         }
         if(i == 7){
            charlie(PinA, PinB, PinC, PinD, 6);
            HAL_Delay(500);
            if(stopFlag == 1)
               return;

         }

      }
      
   }  


}

void charlie(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int pos){
   if(pos == 0){
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);
   }


   // 12'oclock
   // A = 1
   // B = Z
   // C = 0
   // D = Z
   if(pos == 12){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
      }

   // 1'oclock
   // A = 1
   // B = Z
   // C = 0
   // D = Z
   if(pos == 1){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
      }


   // 2'oclock
   // A = Z
   // B = 1
   // C = Z
   // D = 0
   if(pos == 2){
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
      }

   // 3'oclock
   // A = Z
   // B = 1
   // C = Z
   // D = 0
   if(pos == 3){
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
      }


   // 4'oclock
   // A = 1
   // B = Z
   // C = Z
   // D = 0
   if(pos == 4){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
      }

   // 5'oclock
   // A = 0
   // B = Z
   // C = Z
   // D = 1
   if(pos == 5){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
      }

   // 6'oclock
   if(pos == 6){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
      }

   // 7'oclock
   if(pos == 7){
      HAL_GPIO_Init(GPIOA, &PinA);
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_2);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);
      
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
      }

   // 8'oclock
   // A = Z
   // B = 1
   // C = 0
   // D = Z
   if(pos == 8){
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
      }

   // 9'oclock
   // A = Z
   // B = 1
   // C = 0
   // D = Z
   if(pos == 9){
      HAL_GPIO_Init(GPIOA, &PinB);
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_3);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
      }

   // 10'oclock
   // A = Z
   // B = Z
   // C = 0
   // D = 1
   if(pos == 10){
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);

      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET);
      }
   
   // 11'oclock
   // A = Z
   // B = Z
   // C = 1
   // D = 0
   if(pos == 11){
      HAL_GPIO_Init(GPIOA, &PinC);
      HAL_GPIO_Init(GPIOA, &PinD);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_0);
      HAL_GPIO_DeInit(GPIOA, GPIO_PIN_1);
            
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET);
      }

}

GPIO_InitTypeDef initA(){
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, A_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Mode_Pin */
  GPIO_InitStruct.Pin = Mode_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Mode_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin */
  GPIO_InitStruct.Pin = A_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  return GPIO_InitStruct;
}

GPIO_InitTypeDef initB(){
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, B_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Mode_Pin */
  GPIO_InitStruct.Pin = Mode_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Mode_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin */
  GPIO_InitStruct.Pin = B_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  return GPIO_InitStruct;
}

GPIO_InitTypeDef initC(){
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, C_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Mode_Pin */
  GPIO_InitStruct.Pin = Mode_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Mode_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin */
  GPIO_InitStruct.Pin = C_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  return GPIO_InitStruct;
}

GPIO_InitTypeDef initD(){
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, D_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : Mode_Pin */
  GPIO_InitStruct.Pin = Mode_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(Mode_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin */
  GPIO_InitStruct.Pin = D_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
//  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  return GPIO_InitStruct;
}
