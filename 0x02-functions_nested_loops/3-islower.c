#include "main.h"

/**
 * main - check the code
 * Description - checks for lower case character
 * Return: 1 if lowercse or 0 if uppercase.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

