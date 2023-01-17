#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to the type struct dog pointers.
 * @d: pointer to type struct dog.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
