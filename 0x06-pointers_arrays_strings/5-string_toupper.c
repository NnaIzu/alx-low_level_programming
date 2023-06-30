#include "main.h"

/**
 * string_toupper - a function that changes a string
 * from lowercase to uppercase
 * @n: pointer
 * Return: A pointer to the string
 */

char *string_toupper(char *n)
{
	int index = 0;

	while (n[index])
	{
	if (n[index] >= 'a' && n[index] <= 'z')
	n[index] -= 32;
	index++;
	}
	return (n);
}
