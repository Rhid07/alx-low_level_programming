#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_string;

    if (separator == NULL)
    {
	    return;
    }
    
    va_start(my_string, n);

    for (i = 0; i < n; i++)
    {
	    char *c = va_arg(my_string, char*);
	    
	    if (c == NULL)
	    {
		    printf("nil");
	    }
	    printf("%s", c);
		    
		    if (i < (n - 1))
		    {
			    printf("%s", separator);
		    }
    }
    printf("\n");
    va_end(my_string);
}
