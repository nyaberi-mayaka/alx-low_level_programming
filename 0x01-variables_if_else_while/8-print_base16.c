#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *
 *Return: always 0
 */

int main(void)
{
	int  hexan;

	char hexa;

	for (hexan = 0; hexan < 10; hexan++)
	{
		putchar((hexan % 10) + '0');
	}
	for (hexa = 'A'; hexa <= 'F'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);
}
