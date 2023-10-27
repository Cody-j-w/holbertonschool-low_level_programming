#ifndef HEADER
#define HEADER

/**
 * struct op - an operator structure, pairing an operator with
 * its respective function
 * 
 * @op: the operator
 * @f: the operation function
*/
typedef struct op
{
    char *op;
    int (*f)(int, int);
} op_t;

int (*get_op_func(char *))(int, int);

int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

#endif
