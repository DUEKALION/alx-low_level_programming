#include "main.h"

/**
 * print_rev - a function that prints a string in reverse,
 * followed by a new line
 * @s: input string
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = 0;
	int index = 0;

	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);


	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns length.
 */
int _strlen(char *s)
{

	int count, inc;

	inc = 0;

	for (count = 0; s[count] != '\0'; count++)
		inc++;

	return (inc);
}
