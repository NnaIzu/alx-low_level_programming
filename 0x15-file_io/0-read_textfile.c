#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to read a text file and print it to POSIX
 * STDOUT.
 * @filename: textfile to be read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed ||
 *        0 when filename is NULL || write function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *let;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	let = malloc(sizeof(char) * letters);
	r = read(fd, let, letters);
	w = write(STDOUT_FILENO, let, r);

	free(let);
	close(fd);
	return (w);
}
