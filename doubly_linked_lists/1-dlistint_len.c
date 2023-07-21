#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
