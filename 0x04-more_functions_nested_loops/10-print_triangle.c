#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * Only _putchar is allowed
 * @size: The size of the triangle, to be passed to the function argument
 *
 * Return: Null
 */

void print_triangle(int size)
{
	int i;
	int space;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size; space > i; space--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= space; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
