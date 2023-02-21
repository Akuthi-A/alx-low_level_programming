#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase ten times
 *
 * Return: has no return value(void)
 */

void print_alphabet_x10(void)
{
	int ch;
	int number = 0;

	while (number < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	number++;
	}
}
