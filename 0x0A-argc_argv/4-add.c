#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point - adds two numbers and prints the results
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int index;
	int cindex;
	int sum = 0;

	if (argc > 1)
	{
		for (index = 1; index < argc ; index++)
		{
			for (cindex = 0; argv[index][cindex] != '\0'; cindex++)
			{
				if (isdigit(argv[index][cindex]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[index]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
