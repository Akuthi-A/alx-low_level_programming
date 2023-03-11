#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0, else 1 if arguments not a number
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc == 1)
	{
		printf("%d\n", 0);

		return (0);
	}

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				char *error = "Error";

				printf("%s\n", error);

				return (1);
			}
		result += atoi(argv[i]);

	}
	printf("%d\n", result);

	return (0);
}
