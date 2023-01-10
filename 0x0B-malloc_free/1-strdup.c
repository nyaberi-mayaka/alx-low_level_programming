#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string given as a parameter.
 *
 * Return:  returns a pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	if (str == NULL)
		str = "";
	ptr = (char *)malloc(sizeof(char) * strlen(str));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';
	return (ptr);
}
