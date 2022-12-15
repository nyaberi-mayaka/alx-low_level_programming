#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *@n: parameter passed from main.c.
 *
 *Return: void.
 */

void print_line(int n)
{
	int k = 1;

	for (; k <= n; k++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
