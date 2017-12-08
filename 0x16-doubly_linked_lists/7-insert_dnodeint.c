#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: linked list
 * @idx: posisiton to insert
 * @n: data
 * Return: address of new node or null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *new_node;
        dlistint_t *tmp;
        unsigned int i = 1;

        if ((*h == NULL && idx != 0) || h == NULL)
                return (NULL);

        new_node = malloc(sizeof(dlistint_t));
        if (!new_node)
                return (NULL);
        new_node->n = n;
        tmp = *h;

        if (idx == 0)
        {
                new_node = add_dnodeint(h, n);
                return (new_node);
        }

        while (tmp)
        {
                if (i == idx)
                {
                        tmp->next->prev = new_node;
                        new_node->next = tmp->next;
                        new_node->prev = tmp;
                        tmp->next = new_node;
                        return (new_node);
                }
                tmp = tmp->next, i++;
        }
        free(new_node);
        return (NULL);
}
