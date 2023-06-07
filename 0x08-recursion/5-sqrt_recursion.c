#include "main.h"
int my_sqrt(int sqrt,int n);

/**
 * _sqrt_recursion - computes square root using recursion
 * @n: input number
 *
 * Return: perfect root else -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (my_sqrt(0, n));
}

/**
 * my_sqrt - checks the perfect root of n
 * @sqrt: checks the sqrt
 * @n: input number
 *
 * Return: returns sqrt of n
 */

int my_sqrt(int sqrt, int n)
{
	if (sqrt * sqrt > n)
	{
		return (-1);
	}

	else if (sqrt * sqrt == n)
	{
		return (sqrt);
	}

	return (my_sqrt(sqrt + 1, n));

}
