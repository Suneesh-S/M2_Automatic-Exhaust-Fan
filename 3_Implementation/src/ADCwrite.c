#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include "ADCwrite.h"


void ADC_init(void){										
	DDRC = 0x00;	        /* Make ADC port as input */
	ADCSRA = 0x87;          /* Enable ADC, with freq/128  */
	ADMUX = 0x40; 
}

int ADC_Read(char ch)							
{
	ADMUX = 0x40 | (ch & 0x07); 				/* set input channel to read */
	ADCSRA |= (1<<ADSC);							/* Start ADC conversion */
	while (!(ADCSRA & (1<<ADIF)));					/* Wait until end of conversion by polling ADC interrupt flag */
	ADCSRA |= (1<<ADIF);							/* Clear interrupt flag */
	_delay_ms(1);									/* Wait a little bit */
	return ADCW;									/* Return ADC word */
}