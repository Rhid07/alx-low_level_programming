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
	char *c;
    
    va_start(my_string, n);

    for (i = 0; i < n; i++)
    {
	    c = va_arg(my_string, char *);
	    
	    if (c)
		    printf("%s", c);
	    else
		    printf("(nil)");
	    
	    if (i < n - 1)
		    if (separator)
			    printf("%s", separator);
	   
    }
    printf("\n");
    va_end(my_string);
}
