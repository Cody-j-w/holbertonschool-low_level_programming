#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a specified number of bytes from a file
 * @filename: the name of the file being read from
 * @letters: the number of characters to be read
 *
 * Return: the number of characters that were read, or 0 on error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	int filedes;
	int bytes;
	int i;

	if (filename == NULL)
		return (0);
	filedes = open(filename, O_RDONLY);
	if (filedes == NULL)
		return (0);
	bytes = read(filedes, buff, letters);

	for (i = 0; i <= letters; i++)
	{
		putchar(buff[i]);
	}
	return (bytes);
}