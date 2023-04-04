#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first head node in the list
 * @idx: index of listint_l where new node will insert
 * @n: value for new node
 *
 * Return: pointer to address the new node Else NULL if error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nod;
	listint_t *rent, *new_nod;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		rent = *head;
		for (nod = 0; nod < idx - 1 && rent != NULL; nod++)
		{
			rent = rent->next;
		}
		if (rent == NULL)
			return (NULL);
	}
	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	if (idx == 0)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}
	new_nod->next = rent->next;
	rent->next = new_nod;
	return (new_nod);
}

