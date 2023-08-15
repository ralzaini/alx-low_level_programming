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
	char put[] = "_putchar";
	size_t n  = sizeof(put) / sizeof(put[0]);

	while (i < n)
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
