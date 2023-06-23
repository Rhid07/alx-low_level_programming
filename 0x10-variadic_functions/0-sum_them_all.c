#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    int i;
    if(n == 0)
    {
        return 0;
    }
    va_list my_number;
    va_start(my_number, n);
    for(i = 0; i < n; i++)
    {
        int c = va_arg(my_number, int);
        sum = sum + c;
    }
    va_end(my_number);
    return(sum);
}
