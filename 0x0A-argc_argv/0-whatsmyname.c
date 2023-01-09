#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: pointer to an array of character strings that contain the arguments
 * ,one per string - argument vector.
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
