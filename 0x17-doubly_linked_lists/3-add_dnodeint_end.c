#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint_end - adds to the end
 *@head: * to the * of the head
 *@n: The data value for the new node.
 *
 *Return: point of the nEw or maybe NULL if it failed.
 */
dlistint_t* add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t * entry_node;
	dlistint_t *holding = *head;

	if (!head)
		return NULL;

	entry_node = malloc(sizeof(dlistint_t));
	if (!entry_node)
		return NULL;

	entry_node->n = n;
	entry_node->next = NULL;

	if (!holding)
	{
		entry_node->prev = NULL;
		*head = entry_node;
		return entry_node;
	}

	while (holding->next)
		holding = holding->next;

	holding->next = entry_node;
	entry_node->prev = holding;

	return entry_node;
}
