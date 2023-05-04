#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @b: first number
 * @t: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int b, unsigned long int t)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = b ^ t;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
