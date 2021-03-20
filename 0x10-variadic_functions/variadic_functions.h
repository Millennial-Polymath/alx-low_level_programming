#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

#include <unistd.h>



typedef struct type_spec
{
	char letter;
	void (*func)(va_list);
} spec_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
void print_string(va_list list);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);

#endif /* _VARIADIC_FUNCTIONS_H */
