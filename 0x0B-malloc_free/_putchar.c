#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the char c to stdout.
 * @c: The char to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set right.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
