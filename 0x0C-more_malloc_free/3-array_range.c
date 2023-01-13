#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value of array elements.
 * @max: max value of array elements.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
