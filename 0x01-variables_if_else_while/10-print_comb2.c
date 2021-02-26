#include <stdio.h>
/**
 * main - Entry point, prints 0-99 separated with a comma and a space
 *
 * Return: returns zero(sucess)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x != 9 || y != 9)
			{
				putchar(44);
				putchar(32);
			}

		}


	}
	putchar(10);
	return (0);
}
