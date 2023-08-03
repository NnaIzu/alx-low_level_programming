#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * get from on number to another.
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (t = 63; t >= 0; t--)
	{
		current = exclusive >> t;
		if (current & 1)
			count++;
	}

	return (count);
}
