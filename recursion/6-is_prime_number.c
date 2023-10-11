#include "main.h"

/**
 * is_prime_number - determine whether or not an integer is a prime number
 * recursively
 *
 * @n: the given integer
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	else
		return (prime_helper(n, 2);
}

int prime_helper(int base, int divisor)
{
	if (divisor == base)
		return (1);
	else if (base % divisor == 0)
		return (0);
	else 
		return (prime_helper(base, divisor + 1);
}
