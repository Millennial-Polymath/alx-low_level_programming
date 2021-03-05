#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of \ characters to be printed to form a line
 *
 * Return: Null
 */

void print_diagonal(int n)
{
	int i;
	int j;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i-1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
