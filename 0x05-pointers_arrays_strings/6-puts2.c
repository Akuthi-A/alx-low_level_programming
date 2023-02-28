#include "main.h"

/**
 * puts2 - prints every other char in a string with a newline
 * @str: string to printed
 *
 * Return: void
 */

void puts2(char *str)
{
	for (; *str != '\0'; str+2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
