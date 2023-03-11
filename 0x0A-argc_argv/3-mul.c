#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0, else 1 if arguments < 2
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc < 3)
	{
		char *error = "Error";

		printf("%s\n", error);

		return (1);
	}

	result = 1;

	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
