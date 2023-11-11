#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - prints a base10 number as base2
 * @n: the number being printed
*/

void print_binary(unsigned long int n)
{
    int i;
    int bit;
    int sigbit = sizeof(int) * 8 - 1;

    while (((n >> sigbit) & 1) == 0)
        sigbit--;

    for (i = sigbit; i >= 0; i--)
    {
        bit = (n >> i) & 1;

        putchar(bit + '0');
    }
}