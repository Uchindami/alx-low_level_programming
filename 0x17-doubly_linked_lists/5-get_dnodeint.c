#include "lists.h"
#include <stddef.h >	// for NULL

/**
 *get_dnodeint_at_index - Rnode at Nth
 *@head: A pointer to the head of the dlistint_t list.
 *@index: position othe node to return.
 *
 *Return: A pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t* get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tracker = 0;

	while (head)
	{
		if (tracker == index)
			return head;

		head = head->next;
		tracker++;
	}

	return NULL;
}