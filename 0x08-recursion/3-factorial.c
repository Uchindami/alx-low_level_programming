#include "main.h"

/**
 * factorial - returns the n! of a num
 * @n: num to return the n! from
 *
 * Return: n! of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
