#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers and prints the result.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	long int add, x;
	int i;

	add = 0;
	x = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		x = strtol(argv[i], NULL, 10);

		if (x == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}

		add += x;
	}
	printf("%ld\n", add);
	return (0);
}
