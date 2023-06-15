#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint -this prints all the elements of a dlistint_t list
 * @h:this is a pointer to the start header of the linked list
 * Return:should return number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nd;

	for (nd = 0; h != NULL; nd++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
