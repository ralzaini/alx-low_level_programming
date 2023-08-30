#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (c_prime(n, 2));
}

/**
 * c_prime - checks whether it is a prime or not
 * @n: given number
 * @i: int
 * Return: 1 if prime, 0 otherwise
 */

int c_prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (c_prime(n, i + 1));
}
