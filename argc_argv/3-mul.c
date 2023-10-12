#include <stdio.h>

/**
 * main - multiply two provided integers
 *
 * @argc: the number of arguments - ideally no more or less than 3 here
 * @argv: the list of arguments - ideally the program, and two integers
 *
 * Return: 0 on a success, 1 in case of an error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
}
