#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: The number of arguments the program is invoked with.
 * @argv: the argument vector.
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
