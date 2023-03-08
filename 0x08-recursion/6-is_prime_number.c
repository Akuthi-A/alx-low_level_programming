#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 *
 * opt_prime - checks if number is prime
 * @x: input number
 * @y: counter
 *
 * Return: 1 if prime else 0
 */

int opt_prime(int x, int y)
{
	if (x <= 1)
	{
		return (0);
	}
	if (x % y == 0 && y > 1)
	{
		return (0);
	}
	if ((x / y) < y)
	{
		return (1);
	}
	return (opt_prime(x, y + 1));
}

int is_prime_number(int n)
{
	return (opt_prime(n, 1));
}
