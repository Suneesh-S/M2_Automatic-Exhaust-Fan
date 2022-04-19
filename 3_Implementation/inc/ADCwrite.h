/**
 * @file ADCwrite.h
 * @author SUNEESH S 
 * @brief Header file with ADC function used to read from thermistor
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

/**
 * @brief Function to initialise ADC
 * 
 */
void ADC_init(void);

/**
 * @brief Function to read the ADC value
 * 
 * @param ch 
 * @return int 
 */
int ADC_Read(char ch);

#endif