#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @n: input value
 *
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i, j;
	char n[] = ",;.!?(){}\n\t\" ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] == str[i])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
