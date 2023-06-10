#include "main.h"
#include <ctype.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  0 if inputs are > 2, else return 1
 */


int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");

					return (1);
				}
			}
			result += atoi(argv[i]);
		}
	}

	printf("%d\n", result);

	return (0);
}
