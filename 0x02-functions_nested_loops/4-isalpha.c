#include "main.h"

/**
 * _isalpha - function that check for alphabets
 *
 * @c: paameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 therwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
