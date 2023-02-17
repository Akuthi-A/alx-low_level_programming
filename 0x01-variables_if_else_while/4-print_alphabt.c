#include <stdio.h>

/**
 * main - entry point
 *
 * Return: outputs alphabets excluding q and e in lowercase
 */

int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
		{
			continue;
		}
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
