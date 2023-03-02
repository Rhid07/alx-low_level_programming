#include "main.h"


/**
 * _strncat - contatenation two string
 * @dest: destination string
 * @src: src string
 * @n: number of character to append
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
