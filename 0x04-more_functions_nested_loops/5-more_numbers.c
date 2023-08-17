#include "main.h"

/**
* more_numbers - function that prints the numbers, from 0 to 9 10 times
*/

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
		}
		_putchar('\n');
	}
}
