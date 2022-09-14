#include <stdio.h>

/**
 *  main - Check Description
 *  Description: A program that prints _putchar, followed by a new line
 *  Return : returns 0 (successful)
 */

int main(void)
{
  int c;

  while ((c = getchar()) != EOF) {
      putchar(c);
      printf("\n");
  }
	return (0);
}
