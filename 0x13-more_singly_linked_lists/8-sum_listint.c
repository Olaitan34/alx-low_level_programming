#include "lists.h"

/**
 * sum_listint - function that returns the sum of n in list
 * @head: head of list
 * Return: total sum of n in lists
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;
	
	sum = 0;
	ptr = head;

	while (ptr == NULL)
		return (sum);
	if (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
