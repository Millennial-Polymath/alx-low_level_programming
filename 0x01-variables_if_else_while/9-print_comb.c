#include <stdio.h>
/**
 * main - Entry point, prints digits 0-9 separated by a comma
 *
 * Return: Zero, success
 **/

int main(void)
{
	int n;


	for (n = 0; n <= 9; n++)
	{
		if (n < 9)
		{
			putchar(n + '0');
			putchar(44);
		}
		else
		{
			putchar(n + '0');
		}
		putchar(32);

	}
	return (0);
}
