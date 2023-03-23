#include "main.h"

/**
 * print_name - prints name passed in func f
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
