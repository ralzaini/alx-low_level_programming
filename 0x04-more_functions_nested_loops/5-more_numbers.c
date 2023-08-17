#include "main.h"

/**
* more_numbers - function that prints the numbers, from 0 to 9 10 times
*/

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('0' + 1);
				k = j % 10;
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
