#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: The number of times the character _ to be printed
 *
 * Return: Null
 */

void print_line(int n)
{
	int count;

	count = 0;
	while (count <= n)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		else
		{
			_putchar('_');
		}

		count++;

	}
	_putchar('\n');
}
