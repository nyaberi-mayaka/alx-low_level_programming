#include <stdio.h>
/**
 * main -Print all the letters except q and e.
 *
 *Return: Always 0.
 */

int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != 'q' && small != 'e')
		putchar (small);
	}
	putchar ('\n');

	return (0);
}
