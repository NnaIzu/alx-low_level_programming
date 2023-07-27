#include "main.h"

/**
 * _isupper - for uppercase alphabets
 * @c: characters in the alphabet to check
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
