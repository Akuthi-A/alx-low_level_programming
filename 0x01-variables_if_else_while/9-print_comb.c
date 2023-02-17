#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs numbers from 0-9
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
