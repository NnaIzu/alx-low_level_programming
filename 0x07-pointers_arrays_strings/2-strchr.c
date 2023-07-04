#include "main.h"

/**
 * _strchr - a funtion that locatats a character in string
 * @s: inputs in a string
 * @c: character to be located in the string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
