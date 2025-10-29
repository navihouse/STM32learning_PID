#include "stm32f10x.h"  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	OLED_ShowString(1,1,"HDU");
	OLED_ShowString(2,1,"I LOVE YOU");
	OLED_ShowNum(3,1,520,3);
	while(1)
	{
		
	}
		
}