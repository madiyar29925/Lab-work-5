/*
 * Madlight.c
 *
 * Created: 12.07.2021 22:37:31
 * Author : kipch
 */ 

#define  F_CPU  8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRC=(1>>0);
	PORTC&=(1>>0);
	while (1) {
	PORTC=(1>>0);
    _delay_ms(500);
	PORTC&=(1>>0);
	_delay_ms(500);
	DDRC=(1>>0);
	PORTC&=(1>>0);
	while (1) {
		PORTC=(1>>0);
		_delay_ms(500);
		PORTC&=(1>>0);
		_delay_ms(500);
		DDRC=(1>>0);
		PORTC&=(1>>0);
		while (1) {
			PORTC=(1>>0);
			_delay_ms(500);
			PORTC&=(1>>0);
			_delay_ms(500);
			DDRC=(1>>0);
			PORTC&=(1>>0);
			while (1) {
				PORTC=(1>>0);
				_delay_ms(500);
				PORTC&=(1>>0);
				_delay_ms(500);
				DDRC=(1>>0);
				PORTC&=(1>>0);
				while (1) {
					PORTC=(1>>0);
					_delay_ms(500);
					PORTC&=(1>>0);
					_delay_ms(500);
					DDRC=(1>>0);
					PORTC&=(1>>0);
					while (1) {
						PORTC=(1>>0);
						_delay_ms(500);
						PORTC&=(1>>0);
						_delay_ms(500);
						DDRC=(1>>0);
						PORTC&=(1>>0);
						while (1) {
							PORTC=(1>>0);
							_delay_ms(500);
							PORTC&=(1>>0);
							_delay_ms(500);
	}
}


