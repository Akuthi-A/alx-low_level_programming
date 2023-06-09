#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @num: num is the input number
 *
 * Return: returns the absolute value of num
 */

int _abs(int num)
{
	int abs_val;

	if (num < 0)
	{
		abs_val = num * -1;
	}
	else
	{
		abs_val = num;
	}

	return (abs_val);
}

