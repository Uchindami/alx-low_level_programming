#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer
 * @name: Pointer to a character array containing the name
 * @f: Pointer to a function that takes a character pointer as an argument
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
