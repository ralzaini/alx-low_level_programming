#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 *
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++
	}
	return (i);
}
