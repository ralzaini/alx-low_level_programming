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
	int x = 0;
	int y = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			if (!(x > y) || x == y)
			{
				putchar('0' + x);
				putchar('0' + y);
				if (x == 8 && y == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
