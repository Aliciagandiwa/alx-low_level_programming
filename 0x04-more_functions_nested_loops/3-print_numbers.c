#include "main.h"

/**
 * print_number - Prints the numer from 0 upto 9
 * Return: 0 upto 9
 */
void print_number(void)
{
	int x;

	for (x = 0; 0 <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
