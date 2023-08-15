#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alph[26];
	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 26)
		{
			alph[i] = (char)(i + (int)('a'));
			_putchar(alph[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
