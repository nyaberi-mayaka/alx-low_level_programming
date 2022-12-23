#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase, followed by
 *a new line.
 *
 * Return: always 0.
 */

int main(void)
{
	char letter;

	char capital;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}

	for (capital = 'A'; capital <= 'Z'; capital++)
	{
		putchar (capital);
	}

	putchar('\n');

	return (0);
}
