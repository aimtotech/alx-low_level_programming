#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the lowercase alphabet in reverse
 * return : 0 if successful
 */
int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
