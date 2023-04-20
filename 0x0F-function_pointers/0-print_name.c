#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
    // Check if name and f are not NULL
    if (name != NULL && f != NULL)
    {
        // Call the function pointed to by f with name as argument
        f(name);
    }
}
