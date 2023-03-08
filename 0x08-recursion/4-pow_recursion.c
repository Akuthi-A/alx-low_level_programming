#include "main.h"

/**
 * _pow_recursion - takes the power of a number
 * @x: base
 * @y: exponent
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
