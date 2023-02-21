#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: input number
 *
 * Return: returns the last digit of num
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(num);
	return (last_digit);
}
