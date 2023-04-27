#include "lists.h"

/**
 * list_len - returns the num of elemts in a linked list
 * @h: pointer to the list_t list
 *
 * Return: num of elmets in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
		count++;

	return (count);
}
