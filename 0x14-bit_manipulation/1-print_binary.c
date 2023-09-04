#include "main.h"

/**
 * print_binary - function to prints the binary number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int val;

	for (i = 63; i >= 0; i--)
	{
		val = n >> i;
		if (val & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
