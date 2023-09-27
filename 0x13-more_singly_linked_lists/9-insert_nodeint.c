#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at index
  * @head: head node
  * @idx: index to insert
  * @n: data to write in
  * Return: Returns a pointer to the new node created || null
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL && idx != 0)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	ptr = *head;
	for (cnt = 0; ptr && cnt < (idx - 1); cnt++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
