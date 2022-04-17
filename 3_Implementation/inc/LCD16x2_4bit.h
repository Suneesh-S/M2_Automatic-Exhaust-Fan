#ifndef LCD16X2_4BIT_H_
#define LCD16X2_4BIT_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

#define LCD_DPORT PORTB
#define LCD_DDR DDRB
#define LCD_RS 0
#define LCD_EN 1

void LCDcommand(unsigned char cmnd);
void LCDdata(unsigned char data);
void LCDinit(void);
void LCD_gotoxy(unsigned char x, unsigned char y);
void LCD_print(char *str);
void LCD_clear();

#endif /* LCD16X2_4BIT_H_ */