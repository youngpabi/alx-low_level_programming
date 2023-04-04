#include "lists.h"

/**
 * pop_listint - pops node
 * @head: list address
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int z = 0;
	listint_t *tep;

	if (*head == NULL)
		return (z);
	tep = *head;
	v = tep->n;
	free(*head);
	*head = tep->next;

	return (z);
}
