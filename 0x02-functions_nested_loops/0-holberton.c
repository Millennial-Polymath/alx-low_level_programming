#include "holberton.h"
/**
 * main - prints Holberton followed by a new line
 *
 * Return: 0(success)
 **/

int main(void)
{
	char str[10] = "Holberton";
	int index;

	for (index = 0; index <= 9; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

	return (0);
}
