#include "main.h"

#ifndef BUFF_SIZE
#define BUFF_SIZE 1024
#endif

/**
 * main - copies contents of file1 to file2
 * @argc: number of arguments
 * @argv: argument list
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, bytes_read;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't write to ", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd1, buffer, BUFF_SIZE)) != 0)
	{
		write(fd2, buffer, bytes_read);
	}

	if ((close(fd1)) == -1)
	{
		dprintf(STDERR_FILENO, "%s%d\n", "Error: Can't close fd ", fd1);
		exit(100);
	}
	else
		close(fd1);

	if ((close(fd2)) == -1)
	{
		dprintf(STDERR_FILENO, "%s%d\n", "Error: Can't close fd ", fd2);
		exit(100);
	}
	else
		close(fd2);

	return (0);
}
