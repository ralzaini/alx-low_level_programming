#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_char - print char type element from va_list
 * @args: va_list passed to function
 */

void _print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * _print_int - print int type element from va_list
 * @args: va_list passed to function
 */

void _print_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * _print_float - print double type element from va_list
 * @args: va_list passed to function
 */

void _print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * _print_str - print string type element from va_list
 * @args: va_list passed to function
 * @str: string to be printed
 */

void _print_str(char *separator, va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s%s", separator, str);
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

	token_t tokens[] = {
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
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
