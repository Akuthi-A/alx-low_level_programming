#include "main.h"
int optimus(int prime, int n);

/**
 * is_prime_number - determines if a number is prime or not
 * @n: input number
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	return (optimus(2, n));
}

/**
 * optimus - determines if a number is prime
 * @prime: helps determine prime
 * @n: input number
 *
 * Return: 1 if prime, else 0
 */

int optimus(int prime, int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % prime == 0)
		return (0);
	else if (prime > n / 2)
		return (1);

	return (optimus(prime + 1, n));
}
