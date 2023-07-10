#ifndef _MAIN_H_
#define _MAIN_H_

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
