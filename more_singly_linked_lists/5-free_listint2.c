#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: data structure head to null
 *
 * Return:  void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
