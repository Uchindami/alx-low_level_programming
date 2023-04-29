#include "main.h"

/**
 * _strlen_recursion - returns the leng of a str
 * @s: the str to measure
 *
 * Return: the length of the str
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
