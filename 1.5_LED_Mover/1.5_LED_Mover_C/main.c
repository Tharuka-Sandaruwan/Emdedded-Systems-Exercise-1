/*
 * 1.5_LED_Mover_C.c
 *
 * Created: 12/11/2022 9:49:29 AM
 * Author : Tharuka Sandaruwan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>

int main(void)
{
	DDRD = 0b00011111; //setting uno pin 0 -> 4 as outputs
    
    while (1) 
    {
		PORTD = 0b00000001;
		PORTD = 0b00000000;
		PORTD = 0b00000010;
		PORTD = 0b00000000;
		PORTD = 0b00000100;
		PORTD = 0b00000000;
		PORTD = 0b00001000;
		PORTD = 0b00000000;
		PORTD = 0b00010000;
		PORTD = 0b00000000;
		
    }
	return 0;
}

