/**
 * @file LCD16x2_4bit.h
 * @author SUNEESH S
 * @brief Header File with LCD display used to display the temperature
 * @version 0.1
 * @date 2022-04-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef LCD16X2_4BIT_H_
#define LCD16X2_4BIT_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LCD_DPORT PORTB
#define LCD_DDR DDRB
#define LCD_RS 0
#define LCD_EN 1

/**
 * @brief Function that contains all the command dedinitions 
 * 
 * @param cmnd 
 */
void LCDcommand(unsigned char cmnd);

/**
 * @brief Function to initialise the the necessary commands for LCD
 * 
 */
void LCDinit(void);

/**
 * @brief Function to mention where the cursor should be placed to print
 * 
 * @param x 
 * @param y 
 */
void LCD_gotoxy(unsigned char x, unsigned char y);

/**
 * @brief Function to print the required results in LCD display
 * 
 * @param str 
 */
void LCD_print(char *str);

/**
 * @brief Function to clear the LCD display
 * 
 */
void LCD_clear();

#endif /* LCD16X2_4BIT_H_ */