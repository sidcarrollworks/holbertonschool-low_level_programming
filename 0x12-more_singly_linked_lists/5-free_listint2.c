#include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: linked l ist
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

<<<<<<< HEAD
	if (head == NULL || *head == NULL)
=======
	if (!head || *head == NULL)
>>>>>>> 5b9e537f980fb2abc5ef80f6049519736ed9242e
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
