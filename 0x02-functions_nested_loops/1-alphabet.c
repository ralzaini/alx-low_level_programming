#include "main.h"

/**
 * main - entry point
 *
 * Description: prints alphabets in lower case.
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
