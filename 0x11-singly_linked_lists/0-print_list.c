#include "lists.h"

/**
 * print_list - prints the linked list
 * @h: pointer to the structure
 * Return: return the length 0f the list
 */
size_t print_list(const list_t *h)
{
	size_t length = 1;

	while (h->next)
	{
		if (!h->str)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (length);
}
