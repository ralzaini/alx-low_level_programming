#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
i* Return: no return
*/

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(58);
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
