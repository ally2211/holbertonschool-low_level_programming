#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linkedblist.
 * @head: a pointer to the head of the dlistint_t list to be freed
 *
 * Return: address of the element or NULL if it failed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	/* Traverse to the end of the list */
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
