#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0, followed
 * by a new line. You are not allowed to use any variable of type char.
 *You can only use the putchar function
 *
 *Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	putchar('\n');

	return (0);
}
