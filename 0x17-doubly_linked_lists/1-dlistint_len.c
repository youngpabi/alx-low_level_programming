#include "lists.h"

/**
 * dlistint_len -this counts the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 * @h:this is a pointer to the start header of the linked list
 * Return:should return number of nodes in list
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t nd;

	for (nd = 0; h != NULL; nd++)
		h = h->next;
	return (nd);
}
