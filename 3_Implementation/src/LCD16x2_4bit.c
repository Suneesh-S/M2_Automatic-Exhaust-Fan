#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include "LCD16x2_4bit.h"


void LCD_command(unsigned char cmnd)
{   
	LCD_DPORT = (LCD_DPORT & 0x0f)|(cmnd & 0xf0);	/* SEND COMMAND TO DATA PORT */
	LCD_DPORT &= ~ (1<<LCD_RS);						/* RS = 0 FOR COMMAND */
	LCD_DPORT |= (1<<LCD_EN);						/* EN = 1 FOR H TO L PULSE */
	_delay_us(1);									/* WAIT FOR MAKE ENABLE WIDE */
	LCD_DPORT &= ~(1<<LCD_EN);						/* EN = 0 FOR H TO L PULSE */
	_delay_us(100);									/* WAIT FOR MAKE ENABLE WIDE */
	
	LCD_DPORT = (LCD_DPORT & 0x0f)|(cmnd << 4);		/* SEND COMMAND TO DATA PORT */
	LCD_DPORT |= (1<<LCD_EN);						/* EN = 1 FOR H TO L PULSE */
	_delay_us(1);									/* WAIT FOR MAKE ENABLE WIDE */
	LCD_DPORT &= ~(1<<LCD_EN);						/* EN = 0 FOR H TO L PULSE */
	_delay_ms(2);									/* WAIT FOR MAKE ENABLE WIDE */
}

void lcddata(unsigned char data)
{
	LCD_DPORT = (LCD_DPORT & 0x0f)|(data & 0xf0);		/* SEND DATA TO DATA PORT */
	LCD_DPORT |= (1<<LCD_RS);						/* MAKE RS = 1 FOR DATA */
	LCD_DPORT |= (1<<LCD_EN);						/* EN=0 FOR H TO L PULSE */
	_delay_us(1);									/* WAIT FOR MAKE ENABLE WIDE */
	LCD_DPORT &= ~(1<<LCD_EN);						/* EN = 0 FOR H TO L PULSE */
	_delay_us(100);									/* WAIT FOR MAKE ENABLE WIDE */
	
	LCD_DPORT = (LCD_DPORT & 0x0f)|(data << 4);		
	LCD_DPORT |= (1<<LCD_EN);						/* EN=0 FOR H TO L PULSE*/
	_delay_us(1);									/* WAIT FOR MAKE ENABLE WIDE*/
	LCD_DPORT &= ~(1<<LCD_EN);						/* EN = 0 FOR H TO L PULSE*/
	_delay_ms(2);									/* WAIT FOR MAKE ENABLE WIDE*/
}

void LCD_init(void)
{
	LCD_DDR = 0xFF;
	_delay_ms(200);									/* WAIT FOR SOME TIME */
	LCD_command(0x33);
	LCD_command(0x32);								/* SEND $32 FOR INIT OT 0X02 */
	LCD_command(0x28);								/* INIT. LCD 2 LINE, 5 X 7 MATRIX */
	LCD_command(0x0C);								/* DISPLAY ON CURSOR ON */
	LCD_command(0x01);								/* LCD CLEAR */
	_delay_ms(2);
	LCD_command(0x82);								/* SHIFT CURSOR TO WRITE */
}

void LCD_gotoxy(unsigned char x, unsigned char y) /* Function to place the cursor */
{
	unsigned char firstcharadd[]={0x80, 0xC0};
	LCD_command(firstcharadd[y] + x);
}

void LCD_print(char *str) /* Functions to print in LCD */
{
	unsigned char i=0;
	while (str[i] |= 0)
	{
		lcddata(str[i]);
		i++;
	}
}

void LCD_clear(void) /* Function to clear the LCD*/
{
	LCD_command(0x01);
	_delay_ms(2);
}