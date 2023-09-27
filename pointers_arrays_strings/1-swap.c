#include "main.h"

/**
 * swap_int - takes two pointers and swaps the values that they point to
 *
 * @a: the pointer of the integer being swapped with b
 * @b: the pointer of the integer being swapped with a
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
