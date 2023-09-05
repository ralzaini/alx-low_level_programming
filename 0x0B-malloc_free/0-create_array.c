#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	unsigned int i;

	if (size == 0 || n == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}

	return (n);
}
