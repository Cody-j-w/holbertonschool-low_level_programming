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
	int i;
	int j;
	int arrSize = sizeof(*arr) / sizeof(*arr[0]);

	for (i = 0; i < arrSize; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(arr[i][j]);
		}
		_putchar('\n');
	}
}
