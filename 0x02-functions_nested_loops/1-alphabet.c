#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alph[26];
	int i = 0;

	while (i < 26)
	{
		alph[i] = (char)(i + (int)('a'));
		_putchar(alph[i]);
		i++;
	}
	_putchar('\n');
}
