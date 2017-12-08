#include "lists.h"

/**
 * print_dlistint - prints the numbers of a list
 * @h: doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t i = 0;

        if (h == NULL)
                return (i);

        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next, i++;
        }
        return (i);
}
