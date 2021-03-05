#include "holberton.h"
/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: Null
 */

void print_numbers(void)
{
	int count;

	for (count = 0; count <=9; count++)
	{
		_putchar(count + '0');
	}
	_putchar('\n');
}
