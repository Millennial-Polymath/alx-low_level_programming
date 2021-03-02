#include "holberton.h"
/**
* jack_bauer - prints every minute of the day, starting from 00.00 to 23.59
*
* Return: Null
*/


void jack_bauer(void)
{
	int h;
	int h1;
	int m;
	int m1;

	for (h = 0; h <= 2; h++)
	{

		for (h1 = 0; h1 <= 3; h1++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{


					_putchar(h + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(m1 + '0');
					_putchar('\n');

				}
			}



		}
	}
}
