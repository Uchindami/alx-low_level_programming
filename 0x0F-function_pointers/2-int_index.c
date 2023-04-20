#include "function_pointers.h"
/**
 * int_index - Searches for an int in an array using a comparison fun
 * @array: Pointer to an int array
 * @size: Size of the array
 * @cmp: Pointer to a fun that takes an int as an arg and returns an int
 *
 * Return: Index of the first element that matches, or -1 if no match is found or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
