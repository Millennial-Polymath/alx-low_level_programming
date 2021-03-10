#include "holberton.h"

/**
 * puts2 - prints out every other character, followed by a new line
 * @str: The string to be passed to the function argument
 *
 * Return: Null
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count = count + 2;
	}
	_putchar('\n');
}
