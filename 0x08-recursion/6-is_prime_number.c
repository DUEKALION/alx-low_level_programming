#include "main.h"

/**
 * is_prime_number - a function that returns true if the number
 * is a prime
 * @n: number to check
 * Return: true if number is prime
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - returns the 1 if n is prime
 * @n: number to check
 * @start: number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
