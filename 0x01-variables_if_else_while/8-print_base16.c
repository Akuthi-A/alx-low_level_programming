#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs numbers of base 16
 */

int main(void)
{
	int alph;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
