#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
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
}
