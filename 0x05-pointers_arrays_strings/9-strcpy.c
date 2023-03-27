#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src
 *
 * @dest: Copy to
 * @src: Copy from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int length = 0;
    int i;

    while (*(src + length) != '\0')
    {
        length++;
    }

    for (i = 0; i <= length; i++)
    {
        *(dest + i) = *(src + i);
    }

    return (dest);
}
