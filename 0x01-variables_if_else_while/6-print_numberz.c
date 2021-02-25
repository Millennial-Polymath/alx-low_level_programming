#include <stdio.h>

/**
* main - Entry point, prints alphabets digits from 0-9 using putchar only
*
* Return: returns zero
**/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	putchar('\n');

	return (0);
}
