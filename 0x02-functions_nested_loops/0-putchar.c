#include <stdio.h>

/**
 *  main - Check Description
 *  Description: A program that prints _putchar, followed by a new line
 *  Return : returns 0 (successful)
 */

int main(void)
{
 
  char c[8] = "_putchar";
  int i=0;

  while(i<8) {
    putchar(c[i]);
  i++;
  }
  putchar('\n');
  
	return (0);
}
