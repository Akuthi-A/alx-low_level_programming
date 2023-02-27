#include "main.h"

/**
 * _puts - prints a string with a newline
 * @str: string to printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = _strlen(str);
	int j;

	for (j = 0, j < i, j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
