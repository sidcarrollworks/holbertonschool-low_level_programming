#include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: linked l ist
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	if (head == NULL || *head == NULL)
		return;

	tmp = *head;

	while (tmp)
	{
		tmp2 = tmp;
		tmp = tmp2->next;
		free(tmp2);
	}
	*head = NULL;
	free(tmp);
}
