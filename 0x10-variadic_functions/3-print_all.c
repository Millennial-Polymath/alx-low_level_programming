#include "variadic_functions.h"


/**
 * print_char - prints char
 * @list: list of arguments
 * Return: NULL
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_string - prints string
 * @list: list of arguments
 * Return: NULL
 */

void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);

}
/**
 * print_int - prints integer
 * @list: list of arguments
 * Return: NULL
 */

void print_int(va_list list)
{
	int num;

	num = va_arg(list, int);
	printf("%d", num);
}
/**
 * print_float - prints float numbers
 * @list: list of arguments to be passed
 * Return: NULL
 */


void print_float(va_list list)
{
	double fl = va_arg(list, double);

	printf("%f", fl);
}

/**
 * print_all - prints all formats
 * @format: main string to be passed
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator;
	int i;
	int j;

	spec_t type[] =  {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);
	/*iterate through the list access the functio*/
	i = 0;
	j = 0;
	separator = " ";
	while (format != NULL && format[j] != '\0')
	{

		while (type[i].letter != '\0')
		{
			if (type[i].letter == format[j])
			{
				printf("%s", separator);
				type[i].func(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(list);
	printf("\n");
}
