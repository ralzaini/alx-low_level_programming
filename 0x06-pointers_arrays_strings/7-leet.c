#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */

char *leet(char *n)
{
	int i = 0, l;
	char j[] = "aAeEoOtTlL";
	char k[] = "4433007711";

	while (n[i] != '\0')
	{
		l = 0;
		while (l < 10)
		{
			if (n[i] == j[l])
			{
				n[i] = k[l];
			}
			l++;
		}
		i++;
	}

	return (n);
}
