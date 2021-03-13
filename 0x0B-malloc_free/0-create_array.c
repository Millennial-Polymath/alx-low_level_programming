#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - Creates an array of chars, and initialises
 * it with a specific char
 * @size: size of memory to be allocated to the array of chars
 * @c: The initialised character
 *
 * Return: If size is 0, returns null and returns a pointer to the array,
 * NULL if it fails
 */

char *create_array(unsigned  int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * size);
	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
