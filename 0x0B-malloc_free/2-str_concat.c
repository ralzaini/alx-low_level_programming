#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *n;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	k = i + j;
	n = malloc((i * sizeof(*s1) + j * sizeof(*s2)) + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	for (l = 0, m = 0; l < k + 1; l++)
	{
		if (l < i)
		{
			n[l] = s1[l];
		}
		else
		{
			n[l] = s2[m++];
		}
	}
	n[l] = '\0';
	return (n);
}
