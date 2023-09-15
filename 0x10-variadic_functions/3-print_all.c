#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_char - print char type element from va_list
 * @args: va_list passed to function
 */

void _print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _print_int - print int type element from va_list
 * @args: va_list passed to function
 */

void _print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * _print_float - print double type element from va_list
 * @args: va_list passed to function
 */

void _print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * _print_str - print string type element from va_list
 * @args: va_list passed to function
 * @str: string to be printed
 */

void _print_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * _print_all - prints anything
 * @format: format is list of types of arguements
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;

	choose_t choices[] = {
		{"c", _print_char},
		{"d", _print_int},
		{"f", _print_float},
		{"s", _print_str},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (choices[j].choose)
		{
			if (format[i] == choices[j].choose[0])
			{
				printf("%s", separator);
				choices[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
