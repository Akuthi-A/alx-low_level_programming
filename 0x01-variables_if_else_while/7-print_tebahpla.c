#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs the alphabets in lowercase in reverse
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
