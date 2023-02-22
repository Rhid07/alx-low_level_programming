#include "main.h"

/**
 * print_sign - function that print sign
 *
 * @n: function parameter
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{

		if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (0);
}
