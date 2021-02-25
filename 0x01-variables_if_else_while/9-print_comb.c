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
		if (n > 0)
		{
			putchar(44);
			putchar(32);
			putchar(n + '0');
		}
		else
		{
			putchar(n + '0');
		}


	}
	return (0);
}
