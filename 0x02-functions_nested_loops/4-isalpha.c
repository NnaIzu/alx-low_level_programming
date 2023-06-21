#include "main.h"

/**
 * _isalpha - to scan through and select alphabets.
 * @c: Characters in the alphabet.
 * Return: 1 if c is an Alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
