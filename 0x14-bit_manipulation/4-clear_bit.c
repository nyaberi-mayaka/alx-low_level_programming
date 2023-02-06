#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero at a given index.
 * @n: pointer to the number.
 * @index: the index starting form 0
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
