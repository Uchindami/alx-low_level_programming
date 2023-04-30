#include <stdlib.h>
#include "main.h"

/**
 * str_nconcat - concatenates n bytes of a str to another str
 * @s1: str to append to
 * @s2: str to concatenate from
 * @n: num of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;

    while (s2[len2] != '\0')
        len2++;

    len2 = (len2 > n) ? n : len2;

    result = malloc(sizeof(char) * (len1 + len2 + 1));

    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < len2; j++, i++)
        result[i] = s2[j];

    result[i] = '\0';

    return (result);
}
