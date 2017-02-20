/*
 * Digital_Input.c
 *
 * Created: 17/02/2017 7:23:54
 * Author : Anggara Wijaya
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC |= (1<<PC0);  //OUTPUT 
	DDRB &= ~(1<<PB0); //INPUT
	
	while(1)
	{
		if((PINB & (1<<PB0)) == 1) 
		{
			PORTC |= (1<<PC0);
			_delay_ms(500);
			PORTC &= ~(1<<PC0);
		}
	}
}

