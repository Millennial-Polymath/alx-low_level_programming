#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: returns encoded string
 */
char *leet(char *s)
{
	int x = 0, y;

	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (*(s + x) != '\0')
	{
		for (y = 0; y <= 9; y++)
		{
			if (let[y] == s[x])
			{
				s[x] = num[y];
			}
		}
		x++;
	}
	return (s);
}
