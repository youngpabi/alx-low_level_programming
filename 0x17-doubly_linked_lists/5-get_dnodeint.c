#include "lists.h"

/**
 * get_dnodeint_at_index -this Locates a node in a dlistint_t list.
 * @head:it is the head of the dlistint_t list.
 * @index: it is the node to locate.
 * Return: If the node does not exist it should be NULL, else the address of the index node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (; i != 0; i--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
