include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string- to be compared with the second one
 * @s2: second string- to be compare to the first one
 *
 * Return: eturn an integer less than, equal to, or greater than zero if s1 (or the
 * first n bytes thereof) is found, respectively, to be less than, 
 * to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int count, output;

	count = 0;
	while (*(s1 + count) == *(s2 + count) && *(s1 + count) != '\0')
		count++;

	output = (*(s1 + count) - *(s2 + count));

	return (output);
}
