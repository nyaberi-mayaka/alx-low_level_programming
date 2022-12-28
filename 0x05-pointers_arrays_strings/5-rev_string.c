#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 *
 *@s: passed character pointer.
 * Return: void -nothing.
 */

void rev_string(char *s)
{
	int i, len = 0, temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[(len--) - 1] = temp;
	}
}
