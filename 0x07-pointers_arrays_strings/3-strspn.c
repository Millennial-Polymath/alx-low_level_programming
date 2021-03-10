#include "holberton.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, z, match = 0;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] != ' ')
		{
			z = 0;
			while (accept[z] != '\0')
			{
				if (s[x] == accept[z])
				{
					match++;
				}
				z++;
			}
		}
		else
		{
			return (match);
		}
		x++;
	}
	return (match);
}
