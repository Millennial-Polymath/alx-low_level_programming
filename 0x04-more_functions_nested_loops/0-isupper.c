#include "holberton.h"
/**
 * _isupper - Checks for uppercase character
 * @c: The value to be passed to the function argument
 *
 * Return: returns 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
