#include <stdio.h>

/**
 * main - the program starts here, prints 1-100, replacing certain numbers with
 * words
 *
 * Return: void
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (((count % 5) == 0) && (count % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((count % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((count % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count != 100)
		printf(" ");
	}
	putchar('\n');
	return (0);
}
