#include "lists.h"

/**
 * free_list - free list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return (NULL);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
	free(head->str);
}
