#include <stdio.h>


/**
 * print_alphabet - check Description
 * Description: prints all alphabets in lowercase followed by a newline
 * Return: Nothing
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
}
