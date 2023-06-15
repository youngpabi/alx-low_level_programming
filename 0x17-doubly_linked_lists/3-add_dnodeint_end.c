#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -this adds a node to the end of a linked list
 * @head:this  double pointer to the beginning of the linked list
 * @n:The integer value to add to new node
 * Return:The pointer to address of new node, else NULL if failure
 * for AlX_project
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
 	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
