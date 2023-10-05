#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @loc: a pointer to the beginning of the location in memory to be
 * filled
 * @con: the constant byte that will fill memory.
 * @num: the number of memory spaces to be filled.
 *
 * return: loc
 */

char *_memset(char *loc, char con, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
	{
		loc[i] = con;
	}
	return (loc);
}
