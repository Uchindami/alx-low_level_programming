#include "main.h"

/**
 * puts_half - Prints the second half of a string
 *
 * @str: Input string
 */
void puts_half(char *str)
{
    int i, n, length = 0;

    for (i = 0; str[i] != '\0'; i++)
        length++;

    n = length / 2;

    if (length % 2 != 0)
        n++;

    for (i = n; i < length; i++)
        _putchar(str[i]);

    _putchar('\n');
}
