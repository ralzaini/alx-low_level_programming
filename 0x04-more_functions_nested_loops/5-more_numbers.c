#include "main.h"

/**
* more_numbers - function that prints the numbers, from 0 to 9 10 times
*/

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
