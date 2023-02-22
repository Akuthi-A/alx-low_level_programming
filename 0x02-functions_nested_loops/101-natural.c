#include <stdio.h>

/**
 * main - lists all multiples of 3 or 5, below 1024
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	i = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5))
			sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
