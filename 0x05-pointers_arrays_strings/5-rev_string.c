#include "main.h"

/**
 * rev_string - prints a given string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int i, j;
	char temp;
	
	while (s[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
	_putchar('\n');
}
