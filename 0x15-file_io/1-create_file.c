#include "main.h"

/**
 * create_file - to create a file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: pointer of a string to be written to the file.
 *
 * Return: If the function fails (-1), Otherwise (1).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, crt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (crt = 0; text_content[crt];)
			crt++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, crt);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
