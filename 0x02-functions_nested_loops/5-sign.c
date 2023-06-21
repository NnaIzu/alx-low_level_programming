#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: numbers selected from
 * Return: 1 if n is greater than 0, 0 if 0, otherwise -1
 */

int print_sign(int n)
{
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
	_putchar('\n');
}
