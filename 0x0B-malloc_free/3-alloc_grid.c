#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to a 2D array of intgers.
 * @width: number of elements in a single row.
 * @height: number of elements in a single column.
 *
 * Return: double pointer to the base of the 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
