#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: to print alphabets in c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
		putchar('\n');

	return (0);
}
