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
		
		for (int i = 128 ; i>=8; i=i/2) //loop through the ports
		{
			PORTD = i;
			_delay_ms(50);
			PORTD = 0;	
		}

		
    }
	return 0;
}


	
	