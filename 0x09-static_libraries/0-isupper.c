#include "main.h"

/**
 * _isupper - check if parameter is an upper case
 * @c: input character
 * Return: 1 if it is a character, 0 otherwise
 */

int _isupper(int c)
{
	if  (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
		return (0);
}
