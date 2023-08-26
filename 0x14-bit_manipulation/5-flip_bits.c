#include "main.h"

/**
 * flip_bits - calculates nums to change
 * to movefrom one point to another
 * @firstnumber: first number
 * @secnum: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int firstnumber, unsigned long int secnum)
{
	unsigned int count = 0;
	unsigned long int exclusive = firstnumber ^ secnum;

	for (int i = 0; i < 64; i++)
	{
		if ((exclusive >> i) & 1)
			count++;
	}

	return (count);
}
