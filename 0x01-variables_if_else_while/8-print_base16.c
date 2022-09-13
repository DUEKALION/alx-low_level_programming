#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * A program that prints all the numbers of base 16 in lowercase
 * Return : 0
 */

int main(void)
{
	int i;
	char l;

	for(i = '0'; i<= '9'; i++){
		putchar(i);
	}

	for(l = 'a' l<='f'; l++){
		putchar(l);
	}
	putchar('\n');

	return (0);

}
