#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed bewtween strings
 * @n: the number of strings to be passed to the function
 *
 * Return: NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_s;
	unsigned int count;
	char *str;

	va_start(list_s, n);


	for (count = 0; count < n; count++)
	{
		str = va_arg(list_s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (count != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list_s);
	printf("\n");
}
