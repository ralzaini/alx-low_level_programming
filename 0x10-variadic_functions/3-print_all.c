#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printcharacter - print char type element from va_list
 * @args: va_list passed to function
 */

void _printcharacter(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _printfloat - print float type element from va_list
 * @args: va_list passed to function
 */

void _printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * _printinteger - print int type element from va_list
 * @args: va_list passed to function
 */

void _printinteger(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * _printstring - print string element from va_list
 * @args: va_list passed to function
 */

void _printstring(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(nil)";
	}
	printf("%s", string);
}

/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *separator;

	checker storage[] = {
		{"c", _printcharacter},
		{"f", _printfloat},
		{"d", _printinteger},
		{"s", _printstring},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	separator = "";
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", separator);
			storage[j].f(args);
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
