#include "main.h"

/**
 * main - print alphabets in lowercase
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters >= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}

