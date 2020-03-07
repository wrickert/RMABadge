//Charlieplexing Library
//William Rickert March2020

extern int stop;

void charlie(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int pos);

void clock(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, RTC_HandleTypeDef whatTime){

}

void dance(GPIO_InitTypeDef PinA, GPIO_InitTypeDef PinB, GPIO_InitTypeDef PinC, GPIO_InitTypeDef PinD, int mambo){
   // Off
   if(mambo == 0){
       charlie(PinA, PinB, PinC, PinD, 0);
   }

   // Slow Spin
   if(mambo == 1){
       charlie(PinA, PinB, PinC, PinD, 0);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 1);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 2);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 3);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 4);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 5);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 6);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 7);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 8);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 9);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 10);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 11);
       if(stop == 1)
         return;
       HAL_Delay(1000);
       charlie(PinA, PinB, PinC, PinD, 12);
       if(stop == 1)
         return;
       HAL_Delay(1000);
   }

   // Fast Spin
   if(mambo == 2){
       charlie(PinA, PinB, PinC, PinD, 0);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 1);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 2);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 3);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 4);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 5);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 6);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 7);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 8);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 9);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 10);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 11);
       if(stop == 1)
         return;
       HAL_Delay(500);
       charlie(PinA, PinB, PinC, PinD, 12);
       if(stop == 1)
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
             if(stop == 1)
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
            if(stop == 1)
               return;
         }
         if(i == 2){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 10);
               charlie(PinA, PinB, PinC, PinD, 1);
               if(stop == 1)
                  return;
            }
         }
         if(i == 3){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 2);
               charlie(PinA, PinB, PinC, PinD, 10);
               if(stop == 1)
                  return;
            }
         }
         if(i == 4){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 3);
               charlie(PinA, PinB, PinC, PinD, 9);
               if(stop == 1)
                  return;
            }
         }
         if(i == 5){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 4);
               charlie(PinA, PinB, PinC, PinD, 8);
               if(stop == 1)
                  return;
            }
         }
         if(i == 6){
            for(int j =0; j<10000; j++){
               charlie(PinA, PinB, PinC, PinD, 5);
               charlie(PinA, PinB, PinC, PinD, 7);
               if(stop == 1)
                  return;
            }
         }
         if(i == 7){
            charlie(PinA, PinB, PinC, PinD, 6);
            HAL_Delay(500);
            if(stop == 1)
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
