#include <stdio.h>

/**
 * main - prints the sum of even fibonacci's
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long j = 0, k = 1, sum;
	float even_sum;

	while (1)
	{
		sum = j + k;

		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			even_sum += sum;
		}
		j = k;
		k = sum;
	}
	printf("%.0f\n", even_sum);
	return (0);
}

