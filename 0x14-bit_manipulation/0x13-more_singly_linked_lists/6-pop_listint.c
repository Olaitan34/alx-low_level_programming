#include "lists.h"
/**
 * pop_listint - pops head node  off
 * @head: head of list
 * Return: returns head node data
 */
int pop_listint(listint_t **head)
{
	int len;
	listint_t *ptr;

	len = 0;
	if (*head == NULL)
		return (len);
	ptr = (*head)->next;
	len = (*head)->n;
	free(*head);
	*head = ptr;
	return (len);
}
