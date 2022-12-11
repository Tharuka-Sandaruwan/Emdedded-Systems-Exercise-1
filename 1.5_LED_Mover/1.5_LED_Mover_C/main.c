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
	DDRD = 0b11111000; //setting uno pin 7 -> 3 as outputs
    /*
	omitted pin 0 and 1 as cannot upload code
	when those pins are connected to led.
	neeed to remove led to upload the code*/
	
    while (1)  // infinite loop
    {

	PORTD = 0b10000000; // setting pin 7 high
	_delay_ms(20);  // wait for 20ms
	PORTD = 0b00000000; //setting all pins low
	_delay_ms(20);
	PORTD = 0b01000000;
	_delay_ms(20);
	PORTD = 0b00000000;
	_delay_ms(20);
	PORTD = 0b00100000;
	_delay_ms(20);
	PORTD = 0b00000000;
	_delay_ms(20);
	PORTD = 0b00010000;
	_delay_ms(20);
	PORTD = 0b00000000;
	_delay_ms(20);
	PORTD = 0b00001000;
	_delay_ms(20);
	PORTD = 0b00000000;
	_delay_ms(20);
		
    }
	return 0;
}

