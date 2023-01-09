#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;
	long int x = 0,  mul = 1;

	if (argc != 3)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			mul *= x;
		}
		printf("%ld\n", mul);
	}

	return (0);
}
