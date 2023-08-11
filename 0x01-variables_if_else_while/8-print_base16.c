#include <stdio.h>

/**
* main - entry point
*
* Description: Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int x = 0;
	char c;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
