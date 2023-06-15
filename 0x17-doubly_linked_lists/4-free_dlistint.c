#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint -this frese a linked dlistint_t list
 * @head:this is the pointer to the head of the linked list
 * Return: void at all cost
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
