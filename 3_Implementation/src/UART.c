#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include "UART.h"

void USART_init(void)  /*Initialisation of UART protocol */
{
UBRR0H = (BAUDRATE >> (8));
UBRR0L = (BAUDRATE);

UCSR0C=(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

UCSR0C=(1<<UCSZ01)|(1<<UCSZ00);

UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)| (1<<TXCIE0);

}

void USARTWriteChar(char Data[])     /* UART Function to write On the PC */ 
{
int i = 0;

while(Data[i] != 0){

   while(!(UCSR0A & (1<<UDRE0)));
   UDR0=Data[i];
   
   i++;
  }
}