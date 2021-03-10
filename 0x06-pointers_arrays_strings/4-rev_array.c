#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be passed to the function argument
 * @n: the size of the array
 *
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int tempVar, count = 0, last_char;

	last_char = n - 1;
	while (count < last_char)
	{
		tempVar = *(a + count);
		*(a + count) = *(a + last_char);
		*(a + last_char) = tempVar;
		count++;
		last_char--;
	}
}
