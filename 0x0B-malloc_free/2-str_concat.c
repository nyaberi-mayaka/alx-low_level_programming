#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the string to append @s2 to.
 * @s2: The string to be append at the end of @s1.
 *
 * Return: pointer to a newky alocated memory which contains the contents of
 * the concateneted string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	ptr = (char *)malloc(sizeof(char) * (j + i + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		ptr[i + j] = s2[j];

	ptr[i + j + 1] = '\0';

	return (ptr);
}
