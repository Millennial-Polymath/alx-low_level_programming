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
	int index;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	for (index  = 0; index < count; index++)
	{
		if (index % 2 != 0)
			continue;
		_putchar(*(str + index));
	}
	_putchar('\n');
}
