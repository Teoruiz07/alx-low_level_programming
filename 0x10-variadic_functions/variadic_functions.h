#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - struct type defining a printer.
 * @symbol: symbol that represents a data type.
 * @print: A function pointer that prints a data type
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

#endif
