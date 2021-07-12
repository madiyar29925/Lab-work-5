/*
 * MadiLight.c
 *
 * Created: 12.07.2021 18:32:34
 * Author : kipch
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=(1<<2);
    while (1) 
    {
		PORTB=(1<<2);
		_delay_ms(100);
		PORTB&=(1<<2);
		_delay_ms(100);
    }
}

