#include "main.h"

/**
 * get_endianness - fuction to check endianess.
 * Return: 0 if big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int t = 1;
	char *c = (char *) &t;

	return (*c);
}
