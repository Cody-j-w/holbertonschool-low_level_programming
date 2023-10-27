#include "3-calc.h"

/**
 * op_add - add two integers together
 * @a: the first integer
 * @b: the second integer
 * 
 * Return: the result of the addition
*/

int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: the first integer, being subtracted from
 * @b: the second integer, subtracting from @a
 * 
 * Return: the difference between @a and @b
*/

int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: the first integer
 * @b: the second integer
 * 
 * Return: the product of @a and @b
*/

int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - divide a by b
 * @a: the integer being divided
 * @b: the integer that @a is being divided by
 * 
 * Return: the result of the division
*/

int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - divide a by b
 * @a: the integer being divided
 * @b: the integer that @a is being divided by
 * 
 * Return: the remainder of the division
*/

int op_mod(int a, int b)
{
    return (a % b);
}
