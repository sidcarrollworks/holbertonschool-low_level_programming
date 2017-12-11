#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to list
 * @index: node to delete
 * Return: 1 if success or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = tmp->next, i++;
	}
	return (-1);
}
