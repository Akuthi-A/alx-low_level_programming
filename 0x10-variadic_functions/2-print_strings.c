#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_strings - prints strings passed in
 * @separator: string to be printed between string
 * @n: num of args
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string == NULL)
		{
			string = "(nil)";
		}
		printf("%s%s", string, separator);
	}

	printf("\n");

	va_end(list);
}
