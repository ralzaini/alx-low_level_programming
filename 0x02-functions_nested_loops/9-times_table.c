#include "main.h"

/**
* times_table - that prints the 9 times table
*
* Return: no return
*/

void times_table(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = i * j;
			if (k > 9)
			{
				_putchar('0' + k / 10);
				_putchar('0' + k % 10);
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar('0' + k);
			}
			else
				_putchar('0' + k);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
