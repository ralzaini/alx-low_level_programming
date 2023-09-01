#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins.
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l_cents = 0, m = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				l_cents += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l_cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
