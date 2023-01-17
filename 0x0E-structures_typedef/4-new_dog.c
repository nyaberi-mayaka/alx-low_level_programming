#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates length of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * _strcpy - copies the contents of a string to
 * another string
 * @src: the string source
 * @dest: the destination string
 * Return: copy of the string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = src[i]; /* copies the null byte \0 */

	return (dest);
}

/**
 * new_dog- creates a new dog.
 * @name: pointer to name of new dog.
 * @age: age of new dog.
 * @owner: Owner of new dog.
 *
 * Return: pointer to the type dog_t.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *dog_name, *dog_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->age = age;

	if (name != NULL)
	{
		dog_name = malloc(sizeof(char) * _strlen(name) + 1);
		if (dog_name == NULL)
		{
			free(dog_name);
			free(new);
			return (NULL);
		}

		new->name = _strcpy(name, dog_name);
	}
	else
		new->name = NULL;

	if (owner != NULL)
	{
		dog_owner = malloc(sizeof(char) * _strlen(owner) + 1);
		if (dog_owner == NULL)
		{
			free(dog_name);
			free(new);
			return (NULL);
		}

		new->owner = _strcpy(owner, dog_owner);
	}
	else
		new->owner = NULL;

	return (new);
}
