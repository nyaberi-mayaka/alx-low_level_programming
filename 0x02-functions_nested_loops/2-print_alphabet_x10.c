#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *followed by a new line.
 */

void print_alphabet_x10(void)
{
	int x;

	char small;

	for (x = 0; x < 10; x++)
	{
		for (small = 'a'; small <= 'z'; small++)
		{
			_putchar(small);
		}

		_putchar('\n');
	}
}
