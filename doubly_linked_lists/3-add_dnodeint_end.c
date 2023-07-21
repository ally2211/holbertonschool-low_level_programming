#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linkedblist.
 * @head: a pointer to a pointer to the head of the dlistint_t list
 * @n: the value to store in the new node.
 *
 * Return: address of the element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	/* Create a new node and allocate memory for it */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*  Set the value pf the mew mpde */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list */
	current = *head;
	while (current->next != NULL)
		current = current->next;


	/* connect the new node at the end of the list */
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
