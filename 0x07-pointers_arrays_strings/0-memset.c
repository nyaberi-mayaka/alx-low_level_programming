#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to a  memory block that will be filled.
 * @b: value to be stored.
 * @n: number of bytes of @b to be stored.
 * Return: retuns a pointer to the memory area pointed to by @s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
