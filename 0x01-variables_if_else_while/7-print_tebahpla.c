#include <stdio.h>

/**
 *main - Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 *Return: Always 0.
 */

int main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
	{
		putchar(small);
	}

	putchar('\n');

	return (0);
}
