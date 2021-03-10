#include "holberton.h"

/**
 * print_array - Prints n elements of an array of integers
 * followed by a new line
 * @a: The array of integers
 * @n: the number of elements of the array to be printed
 *
 * Return: Null
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;
	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != n-1)
			printf(",");
	}
	printf("\n");
}
