#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0-9 except for 2 and 4
 *
 * Return: Null
 */

void print_most_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		if (count != 4 && count != 2)
			_putchar(count + '0');
	}
	_putchar('\n');
}
