#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (c_prime(n, 2));
}

/**
 * _sqrt - return square root of number
 * @x: number
 * @i: number incrementer acting as divisor
 * Return: square root of `x`
 */

int _sqrt(int j, int k)
{
	int s;

	s = k * k;
	if (s >= j)
		return (k);
	else
		return (_sqrt(j, k + 1));
}

/**
 * c_prime - checks whether it is a prime or not
 * @n: given number
 * @i: int
 * Return: 1 if prime, 0 otherwise
 */

int c_prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (_sqrt(n, 1) < i)
		return (1);
	else
		return (c_prime(n, i + 1));
}
