#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: list
 * @index: index of the node
 * Return: returns node at index or null if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int count = 0;
        dlistint_t *current = head;

        while (current)
        {
                if (count == index)
                        return (current);
                count++;
                current = current->next;
        }

        return (NULL);
}
