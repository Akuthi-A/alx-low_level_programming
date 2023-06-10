#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  0 if inputs are > 2, else return 1
 */


int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc < 3)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
	}

	printf("%d\n", result);

	return (0);
}
