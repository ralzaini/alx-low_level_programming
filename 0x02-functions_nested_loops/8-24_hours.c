#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
i* Return: no return
*/

void jack_bauer(void)
{
 	for (int t =0; t < 24; t++)
	{
	       	for (int i = 0; i < 60; i++)
		{
			if (t < 10)
			{
				_putchar('0');
				_putchar('0' + t);
			}
			else
			{
				_putchar('0' + t / 10);
				_putchar('0' + t % 10);
			}
			_putchar(':');
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			_putchar('\n');
		}
	}
}
