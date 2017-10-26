#include "lists.h"

/**
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
	size_t length;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
