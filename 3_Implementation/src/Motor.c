#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include "Motor.h"
#include "UART.h"

int flag0=0,flag1=0;

void Motor_Control(float temp){

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