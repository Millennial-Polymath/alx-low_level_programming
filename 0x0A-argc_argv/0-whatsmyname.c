#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point, prints the command first command line argument
 * @argc: The number of command line arguments to be passed
 * @argv: The pointer to the array of characters to be passed as arguments
 *
 * Return: Null
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
