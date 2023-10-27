#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: the list of arguments passed to the program
 * 
 * Return: 0 on success, 98 if the incorrect number of arguments
 * is passed, 99 if an invalid operator is used, and 100 if 
 * any form of division by 0 is attempted
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc != 4)
		exit (98);
	if (argv[2][0] == '/' && atoi(argv[3]) == 0)
		exit (100);
	
	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	if (!res)
		exit (99);

	printf("%d\n", res);
	return (0);
}