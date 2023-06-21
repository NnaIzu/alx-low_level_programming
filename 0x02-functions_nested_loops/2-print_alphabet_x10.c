#include "main.h"

/**
 * print_alphabet_x10 - alphabet in lowercase 10 times
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}


