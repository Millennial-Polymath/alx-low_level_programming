#include "holberton.h"

/**
 * print_square - prints a square followed by a new line
 * @size: The number of # that make up the length and width
 *
 * Return: Null
 */

void print_square(int size)
{
	int x;
	int y;

	if (size >= 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
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
