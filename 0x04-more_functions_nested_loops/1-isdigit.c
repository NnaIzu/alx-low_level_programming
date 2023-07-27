#include "main.h"

/**
 * _isdigit - checks for digits (from 0 through 9)
 * @c: digits to be checked (0 - 9)
 *
 * Return: 1 if digit, otherwise, 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
