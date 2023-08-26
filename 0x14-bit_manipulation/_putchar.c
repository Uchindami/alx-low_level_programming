#include "main.h"
#include <unistd.h>

/**
 * _putchar - 2.0 writes c to output with Static buffer & index
 * @c: The character to print
 *
 * Return: On success 1.
 * On error: -1.
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
