
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list my_number;
	
	if (n == 0)
	{
		return 0;
	}


 	va_start(my_number, n);

    	for (i = 0; i < n; i++)
    	{
		int c = va_arg(my_number, int);
        	sum = sum + c;
	}
	va_end(my_number);
	return(sum);
}
