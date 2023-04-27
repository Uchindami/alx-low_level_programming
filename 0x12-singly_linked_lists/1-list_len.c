#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
		count++;

	return (count);
}
