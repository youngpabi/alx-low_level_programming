#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nod, *cut;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (*head == NULL)
		*head = new_nod;

	else
	{
		cut = *head;
		while (cut->next != NULL)
			cut = cut->next;
		cut->next = new_nod;
	}

	return (*head);
}
