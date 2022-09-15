#include <stdio.h>
#include "main.h"

/**
 * main - check Description
 * Description: It prints _putchar
 * Return: 0 (successful)
 */
int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}

	putchar('\n');

	return (0);
}
