#include "lists.h"

/**
 * sum_listint - sums the ints in list
 * @head: list
 * Return: the sum of the ints
 */
int sum_dlistint(dlistint_t *head)
{
<<<<<<< HEAD
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
=======
        int sum = 0;

        if (head == NULL)
                return (0);
        while (head)
        {
                sum += head->n;
                head = head->next;
        }
        return (sum);
>>>>>>> b6627fc9f2b255cef5f0f05777a0a3bd2b6a854f
}
