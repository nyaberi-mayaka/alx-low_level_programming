#include "main.h"

/**
 * print_binary - prints the binary version of a number.
 * @n: the number
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int len, i;
	unsigned long int temp;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	temp = n, len = 0;

	while (temp)
	{
		temp >>= 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar(49);
		else
			_putchar(48);
	}
}
