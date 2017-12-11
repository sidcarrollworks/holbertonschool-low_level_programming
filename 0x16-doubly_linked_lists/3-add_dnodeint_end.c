#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 * @head: list
 * @n: new data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t *new_node = NULL;
	dlistint_t *last = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	last = *head;
	while (last->next)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
=======
        dlistint_t *new_node = NULL;
        dlistint_t *last = NULL;

        new_node = malloc(sizeof(dlistint_t));
        if (!new_node)
                return (NULL);

        new_node->n = n;
        new_node->next = NULL;

        if (*head == NULL)
        {
                *head = new_node;
                new_node->prev = NULL;
                return (new_node);
        }

        last = *head;
        while (last->next)
                last = last->next;

        last->next = new_node;
        new_node->prev = last;
        
        return (new_node);
>>>>>>> b6627fc9f2b255cef5f0f05777a0a3bd2b6a854f
}
