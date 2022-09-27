#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix
 * substring
 * @s: segments of string targeted
 * @accept: reference bytes container
 * Return: The number of bytes in the initial segment of s which
 * consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
