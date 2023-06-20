#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char a, e, q;

	e = 'e';
	q = 'q';

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != e && a != q)
	putchar(a);
	}
	putchar('\n');
	return (0);
}
