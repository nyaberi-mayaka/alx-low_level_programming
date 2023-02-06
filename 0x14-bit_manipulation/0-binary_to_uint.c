#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number to convert passed as a string of characters.
 *
 * Return: the converts number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int unint;

	i = 0, unint = 0, j = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
			unint += (b[i] - '0') * powr(2, j++);

		else
			return (0);

		i--;
	}

	return (unint);
}

/**
 * powr - calculates the power of  number raised to an exponent @exp
 * @base: the base
 * @exp: the exponent.
 *
 * Return: the calculated value.
 */

int powr(int base, int exp)
{
	int result = 1;

	while (exp != 0)
	{
		result *= base;
		--exp;
	}

	return (result);
}
