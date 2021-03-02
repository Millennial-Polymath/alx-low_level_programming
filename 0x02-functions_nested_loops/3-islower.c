#include "holberton.h"
/**
 * _islower - checks for lowercase character
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
