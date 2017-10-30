#include "lists.h"

/**
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (*head == NULL)
		return (0);

	tmp = (*head);
	(*head) = (*head)->next;
	x = tmp->n;
	free(tmp);
	return (x);
}
