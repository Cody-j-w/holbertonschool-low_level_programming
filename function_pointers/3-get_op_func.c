#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - find the correct function by the operator provided
 * and then return it.
 * @operator: the operator of the function that will be fetched by 
 * get_op_func
 * 
 * Return: a pointer to the function aligning with @op
*/

int (*get_op_func(char *operator))(int a, int, b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops)
	{
		if (operator == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
