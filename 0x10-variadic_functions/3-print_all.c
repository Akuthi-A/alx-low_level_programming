#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_float - prints float
 * @f: float to be printed
 *
 * Return: void
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_int - prints int
 * @i: int to be printed
 *
 * Return: void
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_char - prints char
 * @c: char to be printed
 *
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_string - prints string
 * @s: string to be printed
 *
 * Return: void
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of formats(types) to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	format_t formats[] = {
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list list;
	int i, j;
	char *separator = "";

	va_start(list, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		/*printf("arg format: %d\n", format[i]);*/
		j = 0;
		while (formats[j].type != NULL)
		{
			if (*(formats[j].type) == format[j])
			{
				printf("%s", separator);
				(formats[j].f)(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
