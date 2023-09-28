#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint - Adds a new node at start
 *@head: * to * of the Head
 *@n: The data value for the new node.
 *
 *Return: Location of new 
 */
dlistint_t* add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t * new_guy;

	if (!head)
		return NULL;

	new_guy = malloc(sizeof(dlistint_t));
	if (!new_guy)
		return NULL;

	new_guy->n = n;
	new_guy->prev = NULL;
	new_guy->next = *head;

	if (*head)
		(*head)->prev = new_guy;

	*head = new_guy;

	return new_guy;
}
