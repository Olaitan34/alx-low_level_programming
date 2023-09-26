#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node
  * @head: head node
  * @n: value to populate it with
  * Return: returns a new address created lisr
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	
	if (ptr == NULL)
		return(NULL);
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return(*head);
}
