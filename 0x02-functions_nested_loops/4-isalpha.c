#include "holberton.h"
/**
 * _isapha(int c) - checks for alphabetic character
 * @c: the value to be passed to the function
 *
 * Return: returns 1 if the character is lowercase or uppercase
 **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	else
		return (0);
}
