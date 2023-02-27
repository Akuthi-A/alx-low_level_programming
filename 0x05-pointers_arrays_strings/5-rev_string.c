#include "main.h"

/**
 * rev_string - prints a given string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
