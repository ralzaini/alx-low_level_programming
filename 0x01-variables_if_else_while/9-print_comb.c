#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
