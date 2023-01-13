#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 *
 * Return: pointer to modified memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *ptr1;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);

		for (i = 0; i < old_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);

		free(ptr);
		return (ptr1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
	{
		ptr1 = malloc(new_size);

		for (i = 0; i < new_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);

		free(ptr);
		return (ptr1);
	}
	return (NULL);
}
