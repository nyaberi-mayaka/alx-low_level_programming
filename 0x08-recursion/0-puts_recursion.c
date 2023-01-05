#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: Pointer ro the string to be printed.
 */

void _puts_recursion(char *s)
{
	static int i;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i++]);
	_puts_recursion(s);
}
