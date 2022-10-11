#include <stdio.h>

/**
 * main - prints the name of the file it was
 * compiled from.
 * Return: nothing.
 */

int main(void)
{
	printf("%s\n", __File__);

	return (0);
}
