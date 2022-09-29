#include "main.h"

/**
 * factorial - a function that returns the factorial of a given
 * number
 * @n: input number
 * Return: 1 if input is 0, if n is less than 0 return -1. if
 * n > 1 return factorial.
 */

int factorial(int n)
{
	int next;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	next = factorial(n - 1);
	return (n * next);
}
