#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the first element of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
