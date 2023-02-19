#include <stdio.h>

/**
  * main - print lower case and upper case
  * Return: Always 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'A'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);

}

