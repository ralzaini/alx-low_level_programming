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
	int i = 0;
	char put[] = "_putchar";

	while (i < 9)
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
