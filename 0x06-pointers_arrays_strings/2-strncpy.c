#include "holberton.h"

/**
 * _strncpy - copies the string pointed to src, including the null byte
 * @dest: pointer be copied into
 * @src: to be copied to
 * @n: number of characters to copy
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
	{
		*(dest + count) = *(src + count);
	}
	while (count < n)
	{
		*(dest + count) = '\0';
		count++;
	}
	return (dest);
}
