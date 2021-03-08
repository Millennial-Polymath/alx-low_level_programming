#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to a an array of characters(string) to be passed to the function
 *
 * Return: Returns the number of bytes in the string
 */

int _strlen(char *s)
{
	int count;

	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
