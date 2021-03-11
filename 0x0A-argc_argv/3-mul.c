#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints the result of multiplication
 * @argc: The number of command line arguments
 * @argv: Pointer to the arry of characters to be passed
 *
 * Return: Null
 */

int main(int argc, char *argv[])
{
	int mul;

	mul = 0;

	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
