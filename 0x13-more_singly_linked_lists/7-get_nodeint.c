#include "lists.h"

/**
 * get_nodeint_at_index - function to get node index
 * @head: head node
 * @index: node to get
 * Return: struct listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int total = 0;
	listint_t *temp = head;

	while (temp != NULL && total < index)
	{
		total++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
