#include "main.h"
#include <string.h>

/**
 * create_file - creates a new file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, numwritten;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";


	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	numwritten = write(fd, text_content, strlen(text_content));
	if (numwritten == -1)
		return (-1);

	close(fd);

	return (1);


}
