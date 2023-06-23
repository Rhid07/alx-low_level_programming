#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_number;

	if (separator == NULL)
	{
		return;
	}

	va_start(my_number, n);

	for (i = 0; i < n; i++)
	{

		int c = va_arg(my_number, int);

		printf("%d ", c);

		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(my_number);
}
