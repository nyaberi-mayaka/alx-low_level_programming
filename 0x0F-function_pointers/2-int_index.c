#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the base of an array.
 * @size: number of elemets in the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the cmp function does not
 * return 0. If no element matches, return -1. If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j != 0)
				return (i);
		}

	return (-1);
}
