#include "main.h"

/**
 * print_number - Print an integer using only _putchar
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar('0' + (i % 10));
}

