#include "main.h"

/**
 * _strncpy - a function that copies the string
 * @dest: input string
 * @src: input string
 * @n: an input integer
 * Return: A pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;

	char *temp = dest;
	char *start =  src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
