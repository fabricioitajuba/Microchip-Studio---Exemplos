/*
 * Ex03 - LCD5 - com recursos.c
 *
 * Created: 17/10/2022 14:54:23
 * Author : Fabr�cio Ribeiro
 */ 

#include <avr/io.h>
#include "Lcdlbr/lcd.h"

int main(void)
{
	
	lcd_init(LCD_DISP_ON_CURSOR);
	/* Replace with your application code */
	lcd_clrscr();             /* clear screen of lcd */
	lcd_home();               /* bring cursor to 0,0 */
	lcd_puts("     hello      ");        /* type something random */
	lcd_gotoxy(0,1);          /* go to 2nd row 1st col */
	lcd_puts("      World!    ");  /* type something random */
	while (1)
	{
	}
}

