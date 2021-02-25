#include <stdio.h>

/**
 * main - Entry point, prints alphabets in reverse order
 *
 * Return: returns zero
 **/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);
	putchar('\n');

	return (0);
}
