#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: The value to be passed to the function argument
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int x)
{
	int y;

	if (x >= 0)
		y = x % 10;

	else
		y = (-1) * (x % 10);
	_putchar('0' + y);
	return (y);
}
