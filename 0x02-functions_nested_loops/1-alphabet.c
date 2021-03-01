#include "holberton.h"
/**
 * print_alphabet - prints all alphabets
 *
 * Return:  function returns void
 **/
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
