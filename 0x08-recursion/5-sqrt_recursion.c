#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (sq_rt(n, 1));
}

/**
 * sq_rt - helper function to solve _sqrt_recursion
 * @n: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int sq_rt(int n, int i)
{
	int s;

	s = i * i;
	if (s == n)
	{
		return (i);
	}
	else if (s < n)
	{
		return (sq_rt(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
