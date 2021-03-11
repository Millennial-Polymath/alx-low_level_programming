#include "holberton.h"
#include <stdio.h>
/**
 * main - program starts here, prints the number of command line arguments
 * @argc: the  number of arguments
 * @argv: pointer to the array of characters to be passed
 *
 * Return: Zero, success!
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
