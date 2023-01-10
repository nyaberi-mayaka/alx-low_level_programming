#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char.
 * @size: size of array
 * @c: specific character to initialize the array with.
 *
 * Return: pointer to the base address of the array.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	ptr[++i] = '\0';
	return (ptr);
}
