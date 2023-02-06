#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index.
 * @n: the numbert
 * @index: the index starting from 0 of the bit you want to get.
 *
 * Return: Return the value of the bit at index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (n >> index & 1);
}
