#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	size_t i = 0;
	char p[] = "_putchar";
	size_t n = sizeof(p) / sizeof(p[0]);

	while (i < n - 1)
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
