#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs the alphabets in lowercase then uppercase
 */

int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
