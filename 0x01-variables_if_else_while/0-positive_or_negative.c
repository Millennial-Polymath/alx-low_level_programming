#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry for the code, finds whether a number is positive or negative
 *
 * Return: returns zero
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
