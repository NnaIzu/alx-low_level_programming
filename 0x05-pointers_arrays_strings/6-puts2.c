#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be considered
 * Return: (0)
 */

void puts2(char *str)

{

	int i;
	int j;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}