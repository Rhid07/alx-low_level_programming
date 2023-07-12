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

	/* if filename is NULL */
	if (!filename)
		return (0);

	/* opeen filename in read only */
	fd = open(filename, O_RDONLY);

	/* If opening fails */
	if (fd == -1)
		return (0);

	/* create a buffer that read the file contenet into */
	buf = malloc(sizeof(char) * (letters));

	/* if buffer fails */
	if (!buf)
		return (0);

	/* Read 'letters' number of char from the file into the buffer */
	bytesRead = read(fd, buf, letters);

	/* Write the contenet of buffer to the standard output */
	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);

	/* close file dsecriptor */
	close(fd);

	/* Free memory */
	free(buf);

	return (bytesWritten);
}
