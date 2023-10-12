#include <stdio.h>

/**
 * main - enter the program and print the name of the file
 * @argc: the number of arguments
 * @argv: the list of arguments
 *
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
