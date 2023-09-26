#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the content of a linked list
 * @h: pointing to list
 * Return: Return number of linked list printed
 */

size_t print_listint(const listint_t *h)
{
	size_t cntr = 0;

	if (h == NULL)
		return (cntr);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		cntr++;
		h = h->next;
	}

	return (cntr);
}
