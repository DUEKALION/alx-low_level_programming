#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * write a program that prints all possible combinations of single-digit
 * numbers
 * Return : 0
 */

int main(void)
{
	int i;

	for(i='0'; i<='9'; i++){
		putchar(i);
		if(d!= '9'){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}