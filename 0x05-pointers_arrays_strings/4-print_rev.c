#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}

	int i;

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
