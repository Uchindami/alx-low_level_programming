#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Iterates over an array and applies a function to each element
 * @array: Pointer to an integer array
 * @size: Size of the array
 * @action: Pointer to a function that takes an integer as an argument
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
