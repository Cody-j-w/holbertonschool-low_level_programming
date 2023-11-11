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
    int sigbit = sizeof(int) * 16 - 1;

    while (((num >> sigbit) & 1) == 0)
        sigbit--;

    for (i = sigbit; i >= 0; i--)
    {
        bit = n & mask;

        putchar((bit ? 1 : 0) + '0');

        mask <<= 1;
    }
}