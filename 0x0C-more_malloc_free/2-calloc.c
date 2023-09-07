#include "main.h"
#include <stdlib.h>

/**
 * _mem - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_mem(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s++ = b;
	}
	return (p);
}

/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_mem(m, 0, sizeof(int) * nmemb);
	return (m);
}
