#include "main.h"
#include <stdlib.h>
/**
 * w_count - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 **/
int w_count(char *str)
{
	int i, n = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
	char **c;
	int i = 0, j, k, l, w = 0, n = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = w_count(str);
	if (n == 1)
		return (NULL);
	c = (char **)malloc(sizeof(char *) * n);
	if (c == NULL)
		return (NULL);
	c[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			c[w] = (char *)malloc(sizeof(char) * j);
			j--;
			if (c[w] == NULL)
			{
				for (k = 0; k < w; k++)
					free(c[k]);
				free(c[n - 1]);
				free(c);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				c[w][l] = str[i + 1];
			c[w][l] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (c);
}
