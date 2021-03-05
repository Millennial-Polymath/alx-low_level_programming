#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ to be printed
 *
 * Return: Null
 */

void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (n < 0)
			_putchar('\n');
		else if (n >= 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
