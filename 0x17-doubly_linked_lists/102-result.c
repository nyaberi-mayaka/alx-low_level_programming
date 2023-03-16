#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int n);
int is_palindrome(int);

/**
 * main - checks for the largest palindrome number within a given range
 * Return: always EXIT_SUCCESS
 */
int main(void)
{
	int i, j, product, largest_palindrome = 0;

	for (i = 0; i <= 1000; i++)
	{
		for (j = 0; j <= 1000; j++)
		{
			product = i * j;
			if (is_palindrome(product) &&
			    product > largest_palindrome)
				largest_palindrome = product;

		}
	}

	printf("%d", largest_palindrome);

	return (EXIT_SUCCESS);
}

/**
 * is_palindrome - checks if a given number is a palindrome
 * @number: The number to check.
 *
 * Return: 1 if true, else 0
 */
int is_palindrome(int number)
{
	int reverse = 0, original = number;

	while (original != 0)
	{
		reverse = reverse * 10 + original % 10;
		original /= 10;
	}
	return (number == reverse);
}
