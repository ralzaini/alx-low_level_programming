#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *p;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(args, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
