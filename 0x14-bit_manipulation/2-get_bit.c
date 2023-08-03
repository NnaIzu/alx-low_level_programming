#include "main.h"

/**
 * get_bit - to return the value of a bit at an index
 * @n: number to search
 * @index: index
 *
 * Return: value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
