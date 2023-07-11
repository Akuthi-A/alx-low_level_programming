#include "main.h"

/**
 * read_textfile - reads textfile onto console
 * @filename: filename
 * @letters: num of letters to be read
 *
 * Return: number of bytes successfully read, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	close(fd);
	free(buffer);

	return (bytes_read);
}
