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
		if (ch == 'z')
			putchar('z\n');
		else
			putchar(ch);
	}
	return (0);
}
