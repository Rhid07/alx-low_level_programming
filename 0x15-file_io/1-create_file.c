#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file pointer to the name of the file to be created.
 * @text_content: pointer to the null terminated string to write to file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int rewrite;

	
	if (filename == NULL)
		return (-1);

	
	if (text_content == NULL)
		text_content = "";

	
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	
	if (fd == -1)
		return (-1);

	
	rewrite = write(fd, text_content, _strlen(text_content));

	
	if (rewrite == -1)
		return (-1);

	
	close(fd);

	return (1);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
