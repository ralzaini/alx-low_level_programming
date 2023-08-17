#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: The character in ASCII code
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
