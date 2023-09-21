#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entrypoint of program
 * Description: takes a randomly generated integer and determines whether it's
 * positve or negative
 * Return: 0 (always success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is postive\n", n);
        elif (n < 0)
                printf("%d is negative\n", n);


	return (0);
}
