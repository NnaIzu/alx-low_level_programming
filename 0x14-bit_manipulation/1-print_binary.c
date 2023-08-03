#include "main.h"

/**
 * print_binary - to print the binary representation of
 * a number in base 10
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int t, numb = 0;
	unsigned long int current;

	for (t = 63; t >= 0; t--)
	{
		current = n >> t; /*current is the current binary number*/

		if (current & 1)
		{
			_putchar('1');
			numb++;
		}
		else if (numb)
			_putchar('0');
	}
	if (!numb)
		_putchar('0');
}
