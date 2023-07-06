#include "main.h"

/**
 * _strlen_recursion - a function that calculates the
 * lenth of a string
 * @s: the string to measure
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
