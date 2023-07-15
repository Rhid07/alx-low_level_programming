#include "main.h"

/**
 * read_textfile - A function that reads a textfile and print it to the POSIX
 * standard output
 * @filename: A file pointer pointing to file name.
 * @letters: The numbers of character that are to be read
 *
 * Return: The number of character to the standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buf;

	
	if (!filename)
		return (0);

	
	fd = open(filename, O_RDONLY);

	
	if (fd == -1)
		return (0);

	
	buf = malloc(sizeof(char) * (letters));

	
	if (!buf)
		return (0);

	
	bytesRead = read(fd, buf, letters);

	
	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);

	
	close(fd);

	/* Free memory */
	free(buf);

	return (bytesWritten);
}
