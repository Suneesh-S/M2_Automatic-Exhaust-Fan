/**
 * @file UART.h
 * @author SUNEESH S
 * @brief  Header File with UART function to display in PC
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef UART_H_
#define UART_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define BAUD 9600 // define baud
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1) // set baud rate value for UBRR

/**
 * @brief Function used to initialise the USART using commands
 * 
 */
void USART_init(void);

/**
 * @brief Function used to write the output need to display in PC serial monitor
 * 
 * @param Data 
 */
void USARTWriteChar(char Data[]);

#endif