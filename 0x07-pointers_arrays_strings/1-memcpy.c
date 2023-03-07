#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int a = n;

	for (; r < a; r++)
	{
		dest[r] =  src[r];
		n--;
	}

	return (dest);
}
