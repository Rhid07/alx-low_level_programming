#include "main.h"
/**
 * print - function that print 10 time alphabet in lower case
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 'a' ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}

}
