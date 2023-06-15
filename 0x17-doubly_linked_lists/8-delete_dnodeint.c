#include "lists.h"

/**
 * delete_dnodeint_at_index -this deletes the node at index of a dlistint_t linked list
 * @head:this the head of the list
 * @index:an index of the new nodes
 * Return: 1 if when succeeded, -1 if when failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int n;

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	n = 0;

	while (h1 != NULL)
	{
		if (n == index)
		{
			if (n == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		n++;
	}

	return (-1);
}
