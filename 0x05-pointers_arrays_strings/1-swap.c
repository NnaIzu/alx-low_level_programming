#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
