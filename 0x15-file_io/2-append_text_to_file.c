#include "main.h"

/**
 * append_text_to_file - to append text at the end of a file.
 * @filename: pointer to the name of the file to be appended.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL (-1).
 *         If the file does not exist the user lacks write permissions (-1).
 *         Otherwise (1).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, apd = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (apd = 0; text_content[apd];)
			apd++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, apd);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
