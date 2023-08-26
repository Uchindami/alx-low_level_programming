#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets a bit at a given position to 1
 * @number: pointer to the number to change
 * @position: position of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *number, unsigned int position)
{
	if (position > 63)
		exit(EXIT_FAILURE);

	*number = ((1UL << position) | *number);
	return (1);
}
