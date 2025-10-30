#include "stm32f10x.h"  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"
#include "Motor.h"

uint16_t Key_Num;
int8_t Speed;

int main(void)
{
	Key_Init();
	OLED_Init();
	Motor_Init();
	
	Key_Num=Key_GetNum();
	
	OLED_ShowString(1,1,"Speed:");
	
	while(1)
	{
		if(Key_Num==1)
		{
			Speed+=20;
			if(Speed>100)
				Speed=-100;
		}
		Motor_SetSpeed(Speed);
		OLED_ShowSignedNum(1,7,Speed,4);
	}
		
}
