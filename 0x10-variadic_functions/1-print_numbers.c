#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_numbers - prints numbers passed in
 * @separator: string to be printed between numbers
 * @n: num of args
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(list, n), separator);
	}

	printf("\n");
}
