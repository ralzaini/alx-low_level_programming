#include <stdio.h>

/**
 * main - prints the 1st fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = j + k;
		if (i < 49)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);

		}
		j = k;
		k = sum;
	}
	return (0);
}
