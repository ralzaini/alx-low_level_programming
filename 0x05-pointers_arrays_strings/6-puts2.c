#include "main.h"

/**
 *puts2 - print pair values.
 *@str: value to be evaluate.
 *Return: not.
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] % 2 == 0)
		{
			_putchar('0' + s[i]);
		}
	}
	_putchar('\n');
}
