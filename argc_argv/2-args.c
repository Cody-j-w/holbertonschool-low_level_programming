#include <stdio.h>

/**
 * main - print all arguments passed to the program
 * @argc: the number of arguments passed
 * @argv: the list of arguments passed
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
