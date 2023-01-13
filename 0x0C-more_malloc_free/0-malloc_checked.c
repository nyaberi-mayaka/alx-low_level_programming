#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory in bytes.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}

	return (memory);
}
