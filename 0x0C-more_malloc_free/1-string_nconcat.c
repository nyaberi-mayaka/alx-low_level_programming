#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the string to append @s2 to.
 * @s2: The string to be appended to @s1.
 * @n: The number of bytes of @s2 to be appended to @s1.
 *
 * Return: pointer to the newly allocated string or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j, chars_1 = 0, chars_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		chars_1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		chars_2++;
	}

	if (n >= chars_2 + 1)
		ptr = malloc(sizeof(char) * (chars_1 + chars_2 + 1));

	else
		ptr = malloc(sizeof(char) * (chars_1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		ptr[i++] = s2[j];
	}

	ptr[i] = '\0';
	return (ptr);
}
