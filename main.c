#include "stm32f10x.h"
#include "led.h"

 int main(void)
 {	
LED_Init();
  while(1)
	{
	    GPIO_SetBits(GPIOB,GPIO_Pin_5);
	    GPIO_SetBits(GPIOE,GPIO_Pin_5);


	}
 }

 
