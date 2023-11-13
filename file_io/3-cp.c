#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - entrypoint of program
 * @argc: the number of arguments passed to program
 * @argv: the list of arguments passed to program
 *
 * Description: Takes two filenames as arguments, copying the contents of the
 * first to the second. The first file must exist, the second can be created
 * during the copying process.
 *
 * Return: 0 on success. On error, 97, 98, 99, or 100 depending on the error
*/

int main(int argc, char *argv[])
{
	int filedes_from, filedes_to, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filedes_from = open(argv[1], O_RDONLY);
	filedes_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filedes_from == -1 || read(filedes_from, buffer, sizeof(buffer) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((bytes = read(filedes_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(filedes_to, &buffer, bytes) != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(filedes_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_from);
		exit(100);
	}
	if (close(filedes_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes_to);
		exit(100);
	}
	return (0);
}
