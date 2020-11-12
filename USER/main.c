#include "rd5767_head.h"


void Delay(u32 count)
{
	u32 i=0;
	for(;i<count;i++);
}
int main(void)
{	
	BEEP_Init();
	tea5767_init();
	uart_init(115200);

	BEEP = 1;
	Delay(3000000);
	BEEP = 0;
	Delay(3000000);
	tea5767_write();
	while(1)
	{
		Delay(3000000);
	}
}
