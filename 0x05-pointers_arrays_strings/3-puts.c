#include "main.h"

/**
 *_puts -  prints a string, followed by a new line, to stdout.
*
*@str: passed string as a pointer.
*Return: nothing -void.
*/

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
