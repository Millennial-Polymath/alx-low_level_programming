#include "holberton.h"
/**
 * _islower - checks for lowercase character
 *@c: The value to passed to the function
 *
 * Return: returns 1 if lower and zero if otherwise
 **/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
