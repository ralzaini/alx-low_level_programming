#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 = a[i] + sum1;
		sum2 = a[size - i - 1] + sum2;
		a += size;
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
