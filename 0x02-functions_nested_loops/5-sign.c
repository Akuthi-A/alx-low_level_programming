#include "main.h"

/**
 * print_sign - returns whether a number is +ve or -ve
 * @n: the number to be checked
 *
 * Return: returns 1 if +ve, -1 if -ve, 0 if n==0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
