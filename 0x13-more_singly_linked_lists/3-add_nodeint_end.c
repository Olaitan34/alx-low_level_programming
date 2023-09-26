#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node
  * @head: head node
  * @n: value to populate it with
  * Return: returns a new address created lisr
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp=malloc(sizeof(listint_t));
	
	temp->n = n;
	temp->next = NULL;

	if (ptr->next == NULL)
		return(NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;

	return(ptr);
}
