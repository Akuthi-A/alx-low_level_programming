#include "main.h"

/**
 * _puts - prints a string with a newline
 * @str: string to printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
