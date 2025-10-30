#include "stm32f10x.h"  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"
#include "PWM.h"

uint16_t i;
int main(void)
{
	OLED_Init();
	PWM_Init();
	OLED_ShowString(1,1,"HDU");
	OLED_ShowString(2,1,"I LOVE YOU");
	OLED_ShowNum(3,1,520,3);
	while(1)
	{
		for(i=0;i<=100;i++)
		{
			PWM_SetCompare1(i);
			Delay_ms(10);
		}
		for(i=0;i<=100;i++)
		{
			PWM_SetCompare1(100-i);
			Delay_ms(10);
		}
	}
		
}