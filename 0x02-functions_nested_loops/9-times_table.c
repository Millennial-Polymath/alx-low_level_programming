#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Null
 */

void times_table(void)
{
	int x;
	int z;
	int product;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			product = z * x;
			if (z == 0)
			{
				_putchar(product + '0');
			}
			else if (product < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(product + '0');
			}
			else
			{
				_putchar(32);
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (z != 9)
				_putchar(44);

		}
		_putchar('\n');
	}
}
