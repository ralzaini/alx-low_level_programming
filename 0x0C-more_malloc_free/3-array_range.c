#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/

int *array_range(int min, int max)
{
	int *p;
	int i, count;

	if (min > max)
		return (NULL);
	count = (max - min) + 1;
	p = malloc(sizeof(int) * count);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < count && min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
