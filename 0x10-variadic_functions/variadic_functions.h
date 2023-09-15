#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>

/**
 * struct typ - Struct operators
 *
 * @s: Char
 * @t: The function associated
 */

typedef struct choose
{
	char *choose;
	void (*f)(char *, va_list);
} choices_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
