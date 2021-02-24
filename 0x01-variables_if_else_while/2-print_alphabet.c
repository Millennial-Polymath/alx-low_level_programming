#include <stdio.h>
/**
 * main - Entry point, outputs a to z
 *
 * Return: Always 0 (sucess)
 */
int  main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
