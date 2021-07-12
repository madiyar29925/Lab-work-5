/*
 * Demo.c
 *
 * Created: 12.07.2021 17:15:42
 * Author : kipch
 */ 

#include <avr/io.h>

void wait(uint16_t delay){
	while (delay>0)
	{
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		asm("NOP");asm("NOP");asm("NOP");asm("NOP");
		
		delay--;
	}
}
int main(void)
{
    
    while (1) 
    {
		DDRA = 0b00000011;
		PORTA =0b000000000;
		
		wait(10000);
		PORTA=0b00000011;
		wait(10000);
		PORTA=0b000000000;
    }
}

