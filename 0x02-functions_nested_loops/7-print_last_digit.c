#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar('0' + m);
		return (m);
	}
	else
	{
		m = n % 10;
		_putchar('0' + m);
		return (m);
	}

}
