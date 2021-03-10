#include "holberton.h"

/**
 * cap_string - capitalizes first letter of every word
 * @s: string to be passed to the function
 *
 * Return: returns the converted string
 */
char *cap_string(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		if (*(s + 0) >= 'a' && *(s + 0) <= 'z')
		{
			*(s + 0) = *(s + 0) - 32;
		}
		if (s[len] == ' ' || s[len] == '\t' || s[len] == '\n' ||
		    s[len] == ',' || s[len] == ';' || s[len] == '.' ||
		    s[len] == '!' || s[len] == '?' || s[len] == '\"' ||
		    s[len] == '(' || s[len] == ')' || s[len] == '{' || s[len] == '}')
		{
			if (*(s + len + 1) >= 'a' && *(s + len + 1) <= 'z')
				*(s + len + 1) = *(s + len + 1) - 32;
		}
		len++;
	}
	return (s);
}
