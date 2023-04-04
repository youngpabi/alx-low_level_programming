#include "lists.h"

/**
 * get_nodeint_at_index -locates a node of a listint_t linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node to locate
 *
 * Return: pointer to the indexed node(located node)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int save;

	if (head == NULL)
		return (NULL);
	for (save = 0; save < index; save++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
