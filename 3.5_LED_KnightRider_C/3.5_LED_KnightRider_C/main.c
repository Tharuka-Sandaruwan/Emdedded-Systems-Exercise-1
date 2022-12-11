/*
 * 3.5_LED_KnightRider_C.c
 *
 * Created: 12/11/2022 3:25:43 PM
 * Author : Tharuka Sandaruwan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
   DDRD = 0b11111101;
   short cDelay = 100; //change delay here
   
    while (1) 
    {
		
		for (int i = 128 ; i>=8; i/=2)
		{
			PORTD = 4| i;
			_delay_ms(cDelay);
			PORTD = 0;	
		}

		for (int i = 128 ; i>=8; i/=2)
		{
			PORTD = 1| i;
			_delay_ms(cDelay);
			PORTD = 0;	
		}

		for (int i = 16 ; i <= 128; i*=2)
		{
			PORTD =  1|i;
			_delay_ms(cDelay);
			PORTD = 0;	
		}

		for (int i = 16 ; i <= 64; i*=2)
		{
			PORTD =  4|i;
			_delay_ms(cDelay);
			PORTD = 0;
		}
    }
	
	return 0;
}

/*
avrdude.exe: 330 bytes of flash verified
*/