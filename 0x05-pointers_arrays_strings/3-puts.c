#include "holberton.h"
/**
 * _puts - Prints  a string, followw=ed by a new line
 * @str: pointer to an array of characters(string)
 *
 * Return: Null
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
