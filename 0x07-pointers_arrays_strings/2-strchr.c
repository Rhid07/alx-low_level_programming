#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int r = 0;

	for (; *(s + r) != '\0'; r++)
		if (*(s + r) == c)
			return (s + r);
	if (*(s + r) == c)
		return (s + r);
	return ('\0');
}
