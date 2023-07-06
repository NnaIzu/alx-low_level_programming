#include "main.h"

/**
 * _pow_recursion - function that raise the value
 * of a variable to the power of another
 * @x: the variable
 * @y: the power
 * Return: (int)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
