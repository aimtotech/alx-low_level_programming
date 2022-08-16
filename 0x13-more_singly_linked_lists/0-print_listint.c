#include "lists.h"

/**
 * print_listint - Print all the elements of a list_int list
 * @h: data type pointer of struct
 * Return: elements of the str i
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
