#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets value to 0
 * @um: * to the num to change
 * @position: position of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *num, unsigned int position)
{
	if (position > 63)
		exit(EXIT_FAILURE);

	*num = (~(1UL << position) & *num);
	return (1);
}
