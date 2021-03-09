#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: The string( array of characters to be passed to the functions
 *
 * Return: returns null
 */
int _strlen(char *s);
void _puts(char *s);

void print_rev(char *s)
{
	int len;
	int count;

	while (*(s + len) != '\0')
		len++;
	for (count = len - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
