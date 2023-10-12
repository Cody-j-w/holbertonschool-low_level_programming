#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the values of all arguements together
 *
 * @argc: the number of arguments passed
 * @argv: the list of arguments passed
 *
 * Return: 0 if successful, 1 if an error is caught
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;

	while (i < argc)
	{
		if (i > 0)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
					j++;
				}
			}
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
