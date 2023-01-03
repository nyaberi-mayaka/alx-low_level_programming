#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of
 * integers.
 *
 * @a: pointer to a matrix.
 * @size: size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_leading, sum_lagging;

	sum_leading = 0;
	sum_lagging = 0;

	for (i = 0; i < size; i++)
	{
		sum_leading += a[size * i + i];
		sum_lagging += a[size * (i + 1) - (i + 1)];
	}
	printf("%d, %d\n", sum_leading, sum_lagging);
}
