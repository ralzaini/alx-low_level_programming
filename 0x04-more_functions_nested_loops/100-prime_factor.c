#include <stdio.h>

/**
* main - prints the largest prime factor of the number 612852475143
* @void: no argument
* Return: 0
*/

int main(void)
{
	long i, j = 612852475143;

	for (i = 2; i <= j; i++)
	{
		if (j % i == 0)
		{
			j = j / i;
			i--;
		}
	}
	printf("%lu\n", i);

	return (0);
}
