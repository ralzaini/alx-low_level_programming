#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all numbers of base 10, starting from 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
