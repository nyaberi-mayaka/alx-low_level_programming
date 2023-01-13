#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of elements of the array.
 * @size: size of each element.
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
	{
		*((char *)ptr + i) = 0;
	}

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
