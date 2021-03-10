#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: string be located
 *
 * Return: returns pointer to beginning of substring located
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	if (*needle == '\0')
		return (haystack);

	for (count = 0; *(haystack + count) != '\0'; count++)
	{
		if (*(haystack + count) == *needle)
		{
			char *ptr = _strstr(haystack + count + 1, needle + 1);

			return ((ptr) ? ptr - 1 : NULL);
		}
	}
	return (NULL);
}
