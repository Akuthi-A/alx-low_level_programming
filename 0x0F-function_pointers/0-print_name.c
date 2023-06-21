#include "function_pointers.h"

/**
 * print_name - uses callback to print name
 * @name: string to be printed
 * @f: input function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
