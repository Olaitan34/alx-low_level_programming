#include <stdio.h>
#include "lists.h"

/**
 * print_lsistnt - print the content of a linked list
 * @n: integer
 * @next: points to the next node
 * @h: pointing to list
 * Description: singly linked list node structure
 * Return: Return size of lis
 */

size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	if (h==NULL)
	{
		printf("memory is not available");
		exit(1);
	}
	else
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
