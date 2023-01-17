#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: pointer to type struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
}
