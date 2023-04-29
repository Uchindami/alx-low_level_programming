#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter
 * @str: the string to copy
 *
 * Return: pointer to new string, or NULL if str is NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
