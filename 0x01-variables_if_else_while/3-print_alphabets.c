B#include <stdio.h>

/**
 * main - Entry point, prints alphabets from a -z
 *
 * Return: returns zero
 **/

int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');

	return (0);
}
