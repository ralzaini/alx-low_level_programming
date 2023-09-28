#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */

void print_binary(unsigned long int n)
{
	int i = 0, bits = sizeof(n) * 8;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}
	if (!i)
		_putchar('0');
}
