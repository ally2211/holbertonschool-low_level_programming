#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_end_at_index - returns nth node of a doubly linkedblist.
 * @head: a pointer to a pointer to the head of the dlistint_t list
 * @index: the index of the node starting from 0.
 *
 * Return: address of the element or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
