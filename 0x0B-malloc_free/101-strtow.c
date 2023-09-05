#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * letter_count - count num of words recursively
 * @str: pointer to char
 * @i: current index
 * Return: number of words
 **/

int letter_count(char *str, int i)
{
	if (str[i] == '\0')
	{
		return (0);
	}
	if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
	{
		return (1 + letter_count(str, i + 1));
	}
	return (letter_count(str, i + 1));
}

/**
 * w_count - counts number of words in 1d array of strings
 * @str: pointer to char
 * Return: number of words
 **/

int w_count(char *str)
{
	if (str[0] != ' ')
	{
		return(1 + letter_count(str, 0));
	}
	return (letter_count(str, 0));
}

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 **/
char **strtow(char *str)
{
	char **n;
	int i = 0, j, k, l;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}
	l = w_count(str);
	if (l < 1)
	{
		return (NULL);
	}
	n = malloc(sizeof(char *) * (l + 1));
	if (n == NULL)
	{
		return (NULL);
	}
	while ( i < l && *str != '\0')
	{
		if (*str == ' ')
		{
			j = 0;
			while (str[j] != ' ')
			{
				j++;
			}
			n = malloc(sizeof(char) * (j + 1));
			if (n[i] == NULL)
			{
				while (--i >= 0)
				{
					free(n[--i]);
				}
				free(n);
				return (NULL);
			}
			k = 0;
			while (k < j)
			{
				n[i][k] = *str;
				k++;
				str++;
			}
			n[i][k] = '\0';
			i++;
		}
		str++;
	}
	n[i] = '\0';
	return (n);
}
