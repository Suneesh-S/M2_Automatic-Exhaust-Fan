#ifndef UART_H_
#define UART_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void ADC_init(void);
int ADC_Read(char ch);

#endif