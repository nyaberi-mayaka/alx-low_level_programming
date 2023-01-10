#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of the main program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer to the concatenated arguments forming a string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * ac);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[size++] = av[i][j];
		}

		ptr[size++] = '\n';
	}

	return (ptr);
}
