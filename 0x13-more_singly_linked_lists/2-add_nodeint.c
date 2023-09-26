#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The integer to be added to the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr = malloc(sizeof(listint_t));

    if (ptr == NULL)
        return (NULL);

    ptr->n = n;
    ptr->next = *head;

    *head = ptr;
    return (*head);
}
