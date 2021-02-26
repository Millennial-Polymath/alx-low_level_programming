#include <stdio.h>
/**
 * main - Entry point, prints 0-9 separated with a comma
 *
 * Return: returns zero(sucess)
 */
int main(void)
{
	int n;


	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
