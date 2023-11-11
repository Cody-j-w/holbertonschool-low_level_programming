#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints a base10 number as base2
 * @n: the number being printed
*/

void print_binary(unsigned long int n)
{
    int mask = 1;
    int i;
    int bit;

    for (i = sizeof(int) * 8 - 1; i >= 0; i--)
    {
        bit = n & mask;

        printf("%d", bit ? 1 : 0);

        mask <<= 1;
    }
}