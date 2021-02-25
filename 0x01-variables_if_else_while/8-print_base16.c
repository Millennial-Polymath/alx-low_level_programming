#include <stdio.h>

/**
 * main - Entry point, prints out hexadecimals using putchar
 *
 * Return: returns zero
 **/

int main(void)
{
	char n;

	for (n = 0; n <= 15; n++)
	{
		if (n >= 10)
		{
			putchar(n + 87);

		}
		else
		{
			putchar(n + '0');
		}
	}

	putchar('\n');

	return (0);
}
