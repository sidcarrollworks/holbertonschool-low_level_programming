#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
<<<<<<< HEAD
	dlistint_t *tmp;

	if (!head)
		return;

	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
=======
        dlistint_t *tmp;

        if (!head)
                return;

        while (head->next)
        {
                tmp = head->next;
                free(head);
                head = tmp;
        }
        free(head);
>>>>>>> b6627fc9f2b255cef5f0f05777a0a3bd2b6a854f
}
