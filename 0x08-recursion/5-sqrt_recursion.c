#include "main.h"

/**
 * _sqrt_recursion - prints natural sqrt of a number
 * @n: number under sqrt
 *
 * Return: sqrt of n
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(2, n));
}

/**
 * _sqrt - determines sqrt
 * @x: counter
 * @y: number under sqrt
 *
 * Return: sqrt of y
 */

int _sqrt(int x, int y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if ((x * x) > y)
	{
		return (-1);
	}
	return (_sqrt(x + 1, y));
}
