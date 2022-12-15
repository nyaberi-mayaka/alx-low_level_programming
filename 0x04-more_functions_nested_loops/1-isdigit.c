#include "main.h"
#include <ctype.h>

/**
 * _isdigit-checks for a digit (0 through 9).
 *@c: An input digit.
 *Return: returns 1 if c is a digit, returns 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
