#include "main.h"

/**
 * set_bit - to set a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: bit index
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
