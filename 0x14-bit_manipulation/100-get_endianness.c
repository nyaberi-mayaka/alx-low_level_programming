#include "main.h"

/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int i = 0x01234567, start_value, j;
	char *str = (char *) &i;
	char start = str[0];

	start_value = (int) start;

	for (j = 0; j < 8; j++)
	{
		if (((start_value >> j) & 1) == ((i >> j) & 1))
			continue;
		else
			return (0);
	}
	return (1);
}
