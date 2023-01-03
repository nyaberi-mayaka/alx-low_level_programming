#include <stddef.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: a string
 * @c: The character to be found.
 * Return: a pointer to the first occurrence of @c in @s. Otherwise a null
 *pointer is returned.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i++] != '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
