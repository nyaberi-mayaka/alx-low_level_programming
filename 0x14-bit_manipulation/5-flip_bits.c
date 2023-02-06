#include "main.h"

/**
 * flip_bits -determines the number of bits you would need to flip to get from
 * one number to another.
 * @n: one no.
 * @m: the other no.
 *
 * Return: the number of bits you would need to flip to get from one number to
 * another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;

	count = 0;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}

	return (count);
}
