#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: head node
 * @n: new nod value
 * Return: the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
		return (NULL);
	new_nod->n = n;
	new_nod->next = *head;

	*head = new_nod;

	return (*head);
}
