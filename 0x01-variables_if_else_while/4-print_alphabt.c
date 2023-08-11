#include <stdio.h>

/**
 * main - main block
 *
 * Description: print all except q & e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');

	return (0);
}
