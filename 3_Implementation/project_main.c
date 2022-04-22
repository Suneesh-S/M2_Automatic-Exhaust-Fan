#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <stdlib.h>
#include <stdio.h>
#include <util/delay.h>
#include <string.h>
#include "LCD16x2_4bit.h"
#include "UART.h"
#include "ADCwrite.h"
#include "Motor.h"
#define  F_CPU 8000000UL

unsigned char Data[100];
float temp;


int main(void)
{	
    char Temperature[10];
	
    
	USART_init();               /* initialize UART*/
	USARTWriteChar("UART communication initiated ");
	LCD_init();                 /* initialize 16x2 LCD*/
	LCD_clear();				/* clear LCD */
	ADC_init();                 /* initialize ADC*/
    char degree = 'o';
	
	DDRD=0x04;       /* Make PORTD2 as Output */ 
	
	while(1)
	{   
	    LCD_gotoxy(0,0);			/* enter column and row position */
	    LCD_print("Kitchen Temp");
		temp = (ADC_Read(0)*4.88);
		temp = (temp/10.00);
		sprintf(Temperature,"%d%cC  ", (int)temp, degree);    /* convert integer value to ASCII string */
		LCD_gotoxy(0,1);
	    LCD_print(Temperature);                /* send string data for printing */
		_delay_ms(1000);
		memset(Temperature,0,10);
		
		Motor_Control(temp);          /* call for Motor Control Function */

	}
	return 0;
	
}