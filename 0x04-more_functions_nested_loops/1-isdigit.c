#include "holberton.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The value to be checked(passed through the argument
 *
 * Return: returns 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
