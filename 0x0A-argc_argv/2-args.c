#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point, prints all arguments received
 * @argc: The number of arguments to be printed
 * @argv: Pointer to the array of characters to be passed
 *
 * Return: Zero, success!
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc >= 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
