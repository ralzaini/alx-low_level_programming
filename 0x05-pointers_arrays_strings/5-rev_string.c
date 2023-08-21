#include "main.h"

/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}

}
