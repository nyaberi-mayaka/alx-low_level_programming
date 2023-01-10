#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid -frees a 2D grid previously created by malloc function.
 * @grid: pointer to a 2D array
 * @height: number of rows.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
