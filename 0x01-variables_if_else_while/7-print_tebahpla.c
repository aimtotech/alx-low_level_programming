#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: always 0
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
