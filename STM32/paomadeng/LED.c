#include "stm32f10x.h"
#include "LED.h"
void LED_init(void)
{
 
 GPIO_InitTypeDef GPIO_InitStructure;
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);

GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStructure.GPIO_Pin=GPIO_Pin_5; 
GPIO_InitStructure.GPIO_Speed=GPIO_Speed_10MHz; 
	GPIO_SetBits(GPIOB,GPIO_Pin_5); 
	
	
	
GPIO_Init(GPIOB,&GPIO_InitStructure);

	
	
GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
GPIO_InitStructure.GPIO_Pin=GPIO_Pin_6; 
GPIO_InitStructure.GPIO_Speed=GPIO_Speed_10MHz; 

GPIO_Init(GPIOB,&GPIO_InitStructure);
	GPIO_SetBits(GPIOB,GPIO_Pin_6);
}

