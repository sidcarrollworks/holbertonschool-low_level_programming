#include "lists.h"

/**
 * free_list - free list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(tmp->str);
		free(tmp);
		head = tmp;
	}
	free(head->str);
	free(head);
}
