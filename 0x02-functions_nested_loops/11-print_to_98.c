#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a comma
 * numbers should be separated  by a comma, followed by a space
 * the first number to be printed should be the number passed to the function
 * last number should be 98
 * @n: The value to be passed to the function
 *
 * Return: Null
 */

void print_to_98(int n)
{
	int count;

	count = n;

	if (count > 98)
	{
		for (count = n; count >= 98; count--)
		{
			if (count >= 100)
			{
				_putchar((count / 100) + '0');
				_putchar(((count / 10) - 10) + '0');
				_putchar((count % 10) + '0');
			}
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (count != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}

	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			if (count < 10 && count >= 0)
			{
				_putchar(count + '0');
			}
			else if (count < 0)
			{
				if (count >= -9)
				{
					_putchar('-');
					_putchar('0' - (count % 10));
				}

				else if (count < -9 && count)
				{
					_putchar('-');
					_putchar('0' - (count / 10));
					_putchar('0' - (count % 10));
				}
				else if (count <= -100)
				{
					_putchar('-');
					_putchar('0' - (count / 100));
					_putchar('0' - (count / 10) - 10);
					_putchar('0' - (count % 10));
				}
			}
			else
			{
				_putchar((count / 10) + '0');
				_putchar((count % 10) + '0');
			}
			if (count != 98)
			{
				_putchar(44);
				_putchar(32);
			}
		}

	}
	_putchar('\n');

}

