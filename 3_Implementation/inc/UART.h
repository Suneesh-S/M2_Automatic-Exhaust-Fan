#ifndef UART_H_
#define UART_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define BAUD 9600 // define baud
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1) // set baud rate value for UBRR

void USART_init(void);
void USARTWriteChar(char Data[]);

#endif