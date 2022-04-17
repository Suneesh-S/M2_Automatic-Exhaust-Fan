#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <stdlib.h>
#include <stdio.h>
#include <util/delay.h>
#include <string.h>
#include<LCD16x2_4bit.h>
#include<UART.h>
#include<ADCwrite.h>
#define  F_CPU 8000000UL

unsigned char Data[100];

int main(void)
{	
    char Temperature[10];
	float temp;
    int flag0=0,flag1=0;
	
	USART_init();
	USARTWriteChar("UART communication initiated ");
	LCD_init();                 /* initialize 16x2 LCD*/
	LCD_clear();				/* clear LCD */
	ADC_init();                 /* initialize ADC*/
    char degree = 'o';
	
	DDRD=0x04;
	
	while(1)
	{   
	    LCD_gotoxy(0,0);			/* enter column and row position */
	    LCD_print("Kitchen Heat");
		temp = (ADC_Read(0)*4.88);
		temp = (temp/10.00);
		sprintf(Temperature,"%d%cC  ", (int)temp, degree);               /* convert integer value to ASCII string */
		LCD_gotoxy(0,1);
	    LCD_print(Temperature);                /* send string data for printing */
		_delay_ms(1000);
		memset(Temperature,0,10);
		
		if((int)temp>30 && (int)temp<70){
		   
		   PORTC = 0x02;
		   PORTD &= ~(1<<PD2);
		   if(flag0==0){
		     USARTWriteChar("EXhaust Fan is On \n");
			 flag0=1;
			 flag1=0;
		   }
		   
		}
		else{
		
		if((int)temp>70){
		  
		  PORTD=(1<<PD2);
		  PORTC = 0x00;
		  USARTWriteChar("Alert!!!\n");
		}
		else{
		  
		  PORTD &= ~(1<<PD2);
		  PORTC = 0x00;
		  if(flag1==0){
		     USARTWriteChar("EXhaust Fan is OFF \n");
			 flag1=1;
			 flag0=0;
		   }
		}
		}
	}
	return 0;
	
}