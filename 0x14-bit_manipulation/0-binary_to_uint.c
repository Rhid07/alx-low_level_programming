#include "main.h"

/**
 * binary_to_unit - converts a binary to unsigned int
 * @b: is the string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal_value = 0;

	
	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[a] - '0');
	}
	return (decimal_value);

}
