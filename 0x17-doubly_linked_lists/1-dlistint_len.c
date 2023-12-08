#include "lists.h"
/**
 * dlistint_len- return the elements in the list
 *
 * @h: head of the list
 * Return: the number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	
	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
