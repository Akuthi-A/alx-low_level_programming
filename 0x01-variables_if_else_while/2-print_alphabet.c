#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs the alphabets in lowercase
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(' ');
	return (0);
}
