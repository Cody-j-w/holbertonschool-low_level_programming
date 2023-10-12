#include <stdio.h>

/**
 * main - multiply two provided integers
 *
 * @argc: the number of arguments - ideally no more or less than 3 here
 * @argv: the list of arguments - ideally the program, and two integers
 *
 * Return: 0 on a success, 1 in case of an error
 */

int main(int argc, int *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
}
