#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - changes a bi num to an unsigned int.
 * @b: * to the binary str.
 * Return: The changed num, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	while (len > 0)
	{
		len--;
		result += (b[len] - '0') * base;
		base *= 2;
	}

	return (result);
}
