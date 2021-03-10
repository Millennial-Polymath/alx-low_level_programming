#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to be converted
 *
 * Return: returns converted string
 */
char *string_toupper(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		if (*(s + len) >= 'a' && *(s + len) <= 'z')
		{
			*(s + len) = *(s + len) - 32;
		}
		len++;
	}
	return (s);
}
