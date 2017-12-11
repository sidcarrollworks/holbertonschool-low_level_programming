#include "lists.h"

/**
 * dlistint_len - find the length of a list
 * @h: doubly linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
<<<<<<< HEAD
	size_t i = 0;

	if (h == NULL)
		return (i);

	while (h != NULL)
		h = h->next, i++;
	return (i);
=======
        size_t i = 0;

        if (h == NULL)
                return (i);

        while (h != NULL)
                h = h->next, i++;
        return (i);
>>>>>>> b6627fc9f2b255cef5f0f05777a0a3bd2b6a854f
}
