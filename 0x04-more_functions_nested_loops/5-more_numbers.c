#include "main.h"

/**
 * more_numbers - check Description
 * Description: print 10 times nos, from 0 to 14, and newline
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, num = 0;

	for (; num < 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
