#include "dog.h"

/**
 * init_dog - initialixe the elements of variable of tpye struct.
 * @d: struct pointer to type struct.
 * @name: pointer to name of dog.
 * @age: age of dog.
 * @owner: pointer to name of om=wner of the dog.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
