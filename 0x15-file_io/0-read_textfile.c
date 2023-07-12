#include <stdio.h>
#include "main.h"
#include <stdlib.h>

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
	ssize_t Readbytes, writebytes;
	char *buf;

	/* if filename is NULL */
	if (!filename)
		return (0);

	/* to open filename in read only */
	fd = open(filename, O_RDONLY);

	/* If files failed */
	if (fd == -1)
		return (0);

	/* creating a buffer to read the file */
	buf = malloc(sizeof(char) * (letters));

	/* if buffer fails */
	if (!buf)
		return (0);

	/* Reading 'letters' number of char from the file into the buffer */
	Readbytes = read(fd, buf, letters);

	/* to Write the contenet of buffer to the standard output */
	writebytes = write(STDOUT_FILENO, buf, Readbytes);

	/* close file dsecriptor */
	close(fd);

	/* Free buffer */
	free(buf);

	return (writebytes);
}
