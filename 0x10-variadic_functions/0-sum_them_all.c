#include "variadic_functions.h"
/**
 * sum_them_all - Takes a varied number of integers as arguments and adds them
 * @n: The number of arguments to be passed
 *
 * Return: sum of the integers passed to the function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	int sum;

	va_start(ap, n);
	sum = 0;

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
	{

		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
