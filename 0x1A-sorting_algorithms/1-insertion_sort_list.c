#include "sort.h"
void sort(listint_t **list, listint_t *node);

/**
 * insertion_sort_list - insertion sorting method
 * @list: head to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = *list;

	if (!list || !(*list) || !((*list)->next))
		return;
	while (tmp->next)
	{
		tmp = tmp->next;
		sort(list, tmp);
	}
}

/**
 * sort - this function holds the sorting logic
 * @list: list to sort
 * @node: current node
 */
void sort(listint_t **list, listint_t *node)
{
	listint_t *a;
	listint_t *prv;
	listint_t *nxt;

	a = node->prev;

	while (a && (a->n > node->n))
	{
		prv = a->prev;
		nxt = node->next;
		node->next = a;
		a->prev = node;

		if (prv)
		{
			node->prev = prv;
			prv->next = node;
		}
		else
		{
			node->prev = NULL;
			*list = node;
		}

		if (nxt)
		{
			a->next = nxt;
			nxt->prev = a;
		}
		else
			a->next = NULL;
		print_list(*list);
		a = node->prev;
	}
}
