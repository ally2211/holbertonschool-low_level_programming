#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Create a new node and allocate memory for it */
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* If the list is empty and the index is 0, make the new node the head */
	if (*h == NULL && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return new_node;
	}

	/* Traverse to the desired position in the list */
	current = *h;
	count = 0;
	
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

/* If the desired position is out of range or the previous node is NULL (end of list), return NULL */
	if (current == NULL || current->next == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Connect the new node between the current and the next nodes */
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

