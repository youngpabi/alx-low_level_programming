#include "lists.h"

/**
 * pop_listint - pops node
 * @head: list address
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tep;

	if (*head == NULL)
		return (i);
	tep = *head;
	i = tep->n;
	free(*head);
	*head = tep->next;

	return (i);
}
