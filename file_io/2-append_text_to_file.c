#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends a string to the end of a provided file
 * @filename: the name of the file to be appended to
 * @text_content: the string being appended
 *
 * Return: 1 on success, -1 on error
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	unsigned long int i;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_RDWR | O_APPEND);
	if (filedes == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; i < strlen(text_content); i++)
		{
			write(filedes, &text_content[i], 1);
		}
	}
	return (1);
}
