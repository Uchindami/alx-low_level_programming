#include "lists.h"

/**
 *dlistint_len - Gives out the # of elements
 *@h: The head .
 *
 *Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;	

	while (h)
	{
		elements++;
		h = h->next;
	}

	return elements;
}
