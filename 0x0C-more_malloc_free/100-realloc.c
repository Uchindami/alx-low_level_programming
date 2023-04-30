#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: pointer to the mem previously allocated by malloc
 * @old_size: size of the allocated mem for ptr
 * @new_size: new size of the new mem block
 *
 * Return: pointer to the newly allocated mem block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		if (new_size > old_size)
			new_size = old_size;

		while (new_size--)
			new_ptr[new_size] = ((char *)ptr)[new_size];

		free(ptr);
	}

	return (new_ptr);
}
