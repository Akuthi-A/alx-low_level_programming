#include "main.h"

/**
 * _pow_recursion - takes an exponent of a number using recursion
 * @x: base
 * @y: exponent
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
