#include "main.h"

/**
 * _strlen -returns the length of a string.
 *@s: pointer parameter.
 *Return: nothing - void.
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	for (; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
