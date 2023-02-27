#include "main.h"

/**
 * _puts - prints a string with a newline
 * @str: string to printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	
	int j;

	for (j = 0, j < count, j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
