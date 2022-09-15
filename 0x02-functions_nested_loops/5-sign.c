#include "main.h"

/**
 * print_sign - Check
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is +ve, 0 if number is 0, -1 if -ve
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
