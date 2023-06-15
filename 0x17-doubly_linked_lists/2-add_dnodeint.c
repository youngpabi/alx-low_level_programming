#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -this adds a new node at the beginning of the linked list
 * @head:this always doubles the pointer to the beginning of the linked list
 * @n: value to add to the new node
 * Return:A pointer to the address new node, else NULL when failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
