#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 * @s1: an input string
 * @s2: an input string
 * Return: compare s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
