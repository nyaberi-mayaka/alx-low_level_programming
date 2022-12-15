#include "main.h"

/**
 *print_diagonal-draws a diagonal line on the terminal.
 *
 *@n: passed parameter.
 *Return: void
 */

void print_diagonal(int n)
{
	int k = 0;
	int j = 0;

	if (n > 0)
	{
		for (; k < n; k++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
