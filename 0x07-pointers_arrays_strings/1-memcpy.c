#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: An array where bytes from memory area @src will be stored.
 * @src: The memory area to be copied.
 * @n: The number of bytes to copy.
 * Return: Returns ponter to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
