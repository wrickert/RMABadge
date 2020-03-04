

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

   // ?'oclock
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
