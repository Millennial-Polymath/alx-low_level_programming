#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - joins two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Return a pointer to the newly allocated space that contains
 * both the contents of s1 and s2 and 0 Null terminated
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int len_1;
	int i;
	int j;
	char *con;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = 0;

	while (*(s1 + len) != '\0')
		len++;

	len_1 = 0;
	while (*(s2 + len_1) != '\0')
	{
		len_1++;

	}
	con = malloc(sizeof(char) * (len + len_1 + 1));

	if (con == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		con[i] = s1[i];

	for (j = 0; j < len_1; j++, i++)
		con[i] = s2[j];

	con[i] = '\0';
	return (con);
}
