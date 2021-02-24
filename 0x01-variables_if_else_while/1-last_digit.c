#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry for the code, source code to print the lat digit of the number
 * stored in the variable n
 *
 * Return: returns zero
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int k;

	k = n % 10;

	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	} else if (k == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, k);
	} else if (k < 6 && k != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not");
		printf("0\n", n, k)
	}

	return (0);
}
