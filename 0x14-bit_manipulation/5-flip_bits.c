#include "main.h"

/**
 * flip_bits - calculates the number of bits to change
 * to move from one number to another
 * @firstnumber: first number
 * @secnum: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int firstnumber, unsigned long int secnum)
{
	unsigned int count = 0;
	unsigned long int exclusive = firstnumber ^ secnum;
	unsigned int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		count += (exclusive >> i) & 1;
	}

	return (count);
}
