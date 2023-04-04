#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at given index of a listint_t linked list.
 * @head: double pointer to the first head node in the list
 * @index: index of the node to delete
 *
 * Return: (1) if success ELSE (-1) if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tep,*opy = *head;
	unsigned int nod;

	if (opy == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(opy);
		return (1);
	}

	for (nod = 0; nod < (index - 1); nod++)
	{
		if (opy->next == NULL)
			return (-1);
		opy = opy->next;
	}

	tep = opy->next;
	opy->next = tep->next;
	free(tep);
	return (1);
}
