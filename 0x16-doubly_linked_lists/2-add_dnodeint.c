#include "lists.h"

/**
 * add_dnodeint - adds node to beginning of doubly linked list
 * @head: head of list
 * @n: new data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
=======
        dlistint_t *new_node = NULL;

        new_node = malloc(sizeof(dlistint_t));
        if (!new_node)
                return (NULL);

        new_node->n = n;
        new_node->next = *head;
        new_node->prev = NULL;

        if (*head != NULL)
                (*head)->prev = new_node;

        *head = new_node;
        return (new_node);
>>>>>>> b6627fc9f2b255cef5f0f05777a0a3bd2b6a854f
}
