#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @str: string from which the length is gotten
 * Return: the lenth of str.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
