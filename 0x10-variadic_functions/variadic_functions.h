#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op
 *
 * @s: format
 * @f: The function associated
 */
typedef struct format
{
    char *type;
    void (*f)(va_list);
} format_t;

void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);
void print_all(const char * const format, ...);

#endif
