#include "UART.h"
#define UART0_DR *((volatile unsigned int*)(unsigned int*)(0x101f1000))


void UART_SendString(unsigned char* P_tx_str)
{
	/*Loop until the end of the string.*/
	while(*P_tx_str != '\0')
	{
		UART0_DR = (unsigned int)*P_tx_str;
		P_tx_str++;
	}
}