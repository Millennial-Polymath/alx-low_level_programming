#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: The value integer to be passed to the function argument
 * Return: Returns the absolute value of the interger argument,
 * of the appropriate integer type for the function
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x = (-1) * x;
		return (x);
	}
}
