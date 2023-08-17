#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_all;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sum_all, n);

	for (j = 0; j < n; j++)
		sum += va_arg(sum_all, int);

	va_end(sum_all);

	return (sum);
}
