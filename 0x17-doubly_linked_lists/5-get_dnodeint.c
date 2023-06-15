#include "lists.h"

/**
 * get_dnodeint_at_index -this Locates a node in a dlistint_t list.
 * @head:it is the head of the dlistint_t list.
 * @index: it is the node to locate.
 * Return: If the node does not exist it should be NULL, else the address of the index node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int in;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	in = 0;

	while (head != NULL)
	{
		if (in == index)
			break;
		head = head->next;
		in++;
	}

	return (head);
}
