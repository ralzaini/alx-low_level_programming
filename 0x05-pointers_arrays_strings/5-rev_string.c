#include "main.h"

/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		i--;
	}
}
