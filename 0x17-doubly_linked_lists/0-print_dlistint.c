#include "lists.h"

/**
 *print_dlistint -A C function hat prints all the elements
 *@h: The head of the dlistint_t list.
 *
 *Return: The # of nodes_counter in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_counter++;
	}

	return (nodes_counter);
}
