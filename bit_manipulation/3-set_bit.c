#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * set_bit - set a specified bit of an integer to 1
 * @n: a pointer to the integer being changed
 * @index: the specific bit of @n that is being flipped
 * 
 * Return: 1 if the change is successful, -1 if not
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    int mask = 1 << index;
    int digit = *n;

    *n = *n ^ mask;
    if (get_bit(digit, index) == 1)
        return (1);
    return (-1);
}
