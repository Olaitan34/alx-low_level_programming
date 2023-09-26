#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 *
 * @head: A pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
        	ptr = *head;
        	*head = (*head)->next;
        	free(ptr);
	}
	*head = NULL;
}

