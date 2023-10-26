#include <stdio.h>
#include "lists.h"

/**
 * listint_len - To print the number of element
 * @h: The pointer to the node
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (counter);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}	
	return (counter);
}
