#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y && x != y)
			{
				putchar('0' + (x / 10));
				putchar('0' + (x % 10));
				putchar(' ');
				putchar('0' + (y / 10));
				putchar('0' + (y % 10));
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
