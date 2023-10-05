#include "main.h"

/**
 * print_chessboard - prints a chessboard with the size of the field
 * varying based on the supplied parameter.
 *
 * @arr: a pointer that specifies the length of the field in the form of
 * a multidimensional array
 */

void print_chessboard(char (*arr)[8])
{
	int i = 0;
	int j;

	while (arr[i] != '\0')
	{
	       for (j = 0; j < 8; j++)
	       {
		       _putchar(arr[i][j]);
	       }
	       _putchar('\n');
	       i++;
	}
}
