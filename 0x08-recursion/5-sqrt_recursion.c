#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: the number which square root is to be calculated
 * Return: (int)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - computes the natural square root of n
 * @n: number whose square root is to be calculated
 * @i: curating of numbers
 *
 * Return: square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);

	return (_sqrt(n, i + 1));
}
