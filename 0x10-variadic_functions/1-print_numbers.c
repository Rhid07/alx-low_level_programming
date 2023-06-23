#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum); 
    sum = sum_them_all(0, 4, 3, 2);
    printf("%d\n", sum);   
    return (0);
}

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
