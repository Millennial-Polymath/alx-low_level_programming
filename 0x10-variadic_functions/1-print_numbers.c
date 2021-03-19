#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followwed by a new line
 * @separator: the string to be printed between numbers
 * @n: No. of arguments to be passed
 *
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);
	for(count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, unsigned int));

		if ( separator != NULL && count != n -1)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
