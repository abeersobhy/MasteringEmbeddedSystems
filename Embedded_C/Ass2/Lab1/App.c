#include "UART.h"

unsigned char arrOfChar[100] = "Learn In depth : Abeer Sobhy";
unsigned char const arrOfChar2[100] = "Learn In depth : Abeer Sobhy";


void main(void)
{
	UART_SendString(arrOfChar);	
}