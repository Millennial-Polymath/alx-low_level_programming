#include <stdio.h>

/**
 * main - Entry point, prints alphabets from a -z, exept q and e
 *
 * Return: returns zero
 **/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
