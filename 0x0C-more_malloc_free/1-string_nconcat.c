#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return:  NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc(i + n + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != 0; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		s[k] = s2[l];
		k++;
	}
	s[k] = '\0';
	return (s);
}



