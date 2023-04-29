#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two str's
 * @s1: first str to concatenate
 * @s2: second str to concatenate
 *
 * Return: pointer to concatenated str or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
}
