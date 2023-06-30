#include "main.h"

/**
 * _strcmp - a function that compares pointers to two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: if s1 == s2, 0
 * if s1 < s2, the negative difference of the fisrt unmatched character
 * if s1 > s2, the posistve difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
