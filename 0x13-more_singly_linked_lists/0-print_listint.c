#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
