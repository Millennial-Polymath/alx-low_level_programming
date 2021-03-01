#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet a-z
 *
 * Return: Null
 **/

void print_alphabet_x10(void)
{
	int count;
	char alph;

	count = 0;
	while (count <= 9)
	{
		alph = ' ';
		while (alph <= 'z')
		{
			if (alph >= 'a')
				_putchar(alph);
			alph++;
		}
		_putchar('\n');
		count++;
	}
}
