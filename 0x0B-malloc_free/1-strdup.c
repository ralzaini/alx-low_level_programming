#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: string to copy.
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i, j;
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	n = malloc(i * sizeof(*str) + 1);
	if (n == 0)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		n[j] = str[j];
	}
	n[j] = '\0';
	return (n);
}
