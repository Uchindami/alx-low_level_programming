#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: Input string
 */
void puts2(char *str)
{
    int length = 0;
    int i;

    while (*(str + length) != '\0')
        length++;
    for (i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            _putchar(*(str + i));
        }
    }
    _putchar('\n');
}
