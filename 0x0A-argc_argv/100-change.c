#include <stdio.h>

int _atoi(char *s);
int check(int);

/**
 * main - prints the minimum number of coins to make change for an amount of
 * of money.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (_atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	count = check(_atoi(argv[1]));

	if (count == 0 && _atoi(argv[1]) != 0)
	{
		return (0);
	}

	printf("%d\n", count);
	return (0);
}

/**
 * check - calculates the minimum number of coins to make change for an
 * amount of money.
 * @n: The amount of money to make change.
 *
 * Return: The minimum number of coins to give change.
 */

int check(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n >= 2 && n < 5)
		return (1 + check(n - 2));
	else if (n >= 5 && n < 10)
		return (1 + check(n - 5));
	else if (n >= 10 && n < 25)
		return (1 + check(n - 10));
	else if (n >= 25)
		return (1 + check(n - 25));
	else
		return (0);
}


/**
 * _atoi - a function that converts string to integer
 * @s: An input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	int total = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			total = total * 10 + *s - '0';

			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
