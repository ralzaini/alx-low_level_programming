#include "main.h"

/**
 *puts2 - print pair values.
 *@str: value to be evaluate.
 *Return: not.
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
