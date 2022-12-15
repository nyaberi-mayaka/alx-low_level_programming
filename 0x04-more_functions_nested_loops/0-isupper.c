#include <ctype.h>
#include "main.h"
/**
 * _isupper-checks for uppercase character.
 *@c: An input character.
 *Return: returns a value depending on outcome.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
