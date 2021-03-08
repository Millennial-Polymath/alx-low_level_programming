#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * _strlen - returns the length of a string
 * _puts - prints the string in std output
 * @s: The string( array of characters to be passed to the functions
 *
 * Return: returns null
 */
int _strlen(char *s);
void _puts(char *s);

void print_rev(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = _strlen(s) - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		_puts(s);

		i++;
		j--;
	}
}
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

void _puts(char *s)
{

	while (*s != 0)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
