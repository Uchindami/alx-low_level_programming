#include "main.h"

/**
 * print_binary - prints the bi equivalent of a dec num
 * @n: num to print in bi
 */
void print_binary(unsigned long int n)
{
	int i;
	int printing = 0;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			printing = 1;
		}
		else if (printing)
		{
			_putchar('0');
		}
	}
	if (!printing)
	{
		_putchar('0');
	}
}
