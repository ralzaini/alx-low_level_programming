#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;
			if (k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k <= 99 && k > 9)
			{
				_putchar(' ');
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else
			{
				_putchar('0' + k / 100);
				_putchar('0' + (k / 10 % 10));
				_putchar('0' + k % 10);
			}
		}
		_putchar('\n');
	}
}
