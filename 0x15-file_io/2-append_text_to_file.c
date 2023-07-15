#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int reopen, rewrite, lenght = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                for (lenght = 0; text_content[lenght];)
                        lenght++;
        }

        /* write and append text to filename */

        reopen = open(filename, O_WRONLY | O_APPEND);
        rewrite = write(reopen, text_content, lenght);

        if (reopen == -1 || rewrite == -1)
                return (-1);

        close(reopen);

        return (1);
}

