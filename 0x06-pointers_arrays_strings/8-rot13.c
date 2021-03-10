#include "holberton.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to be encoded
 *
 * Return: returns encoded string
 */
char *rot13(char *s)
{
	int x = 0, z;

	char norm_let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char let_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + x) != '\0')
	{
		for (z = 0; z < 53; z++)
		{
			if (norm_let[z] == s[x])
			{
				s[x] = let_rot[z];
				break;
			}
		}
		x++;
	}
	return (s);
}
