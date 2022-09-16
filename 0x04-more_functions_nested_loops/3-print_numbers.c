#include "main.h"

/**
 * main - check Description
 * Description: A function that prints 0 to 9 followed by newline
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}
