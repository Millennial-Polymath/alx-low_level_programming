#include "holberton.h"
/**
 * puts_half - Print the second half of the string
 * If the number of the characters is odd, the function should print the last n
 * characeters, where n= (length of the string-1)/2
 * @str: The string to be passed to the function argument
 *
 * Return: Null
 */

void puts_half(char *str)
{
	int len;
	int index;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (index = (len / 2); index < len; index++)
		{
			_putchar(str[index]);
		}
	}
	else
	{
		for (index = ((len / 2) + 1); index < len; index++)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
