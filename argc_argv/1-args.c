#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: the list of arguments
 *
 * Return: Always 0
 */

int main (int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
