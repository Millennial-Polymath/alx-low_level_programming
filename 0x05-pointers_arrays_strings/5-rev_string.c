#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: String to be passed to the function argument
 *
 * Return: Null
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	int temp_var;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp_var = s[i];
		s[i] = s[j];
		s[j] = temp_var;
		i++;
		j--;
	}
}
