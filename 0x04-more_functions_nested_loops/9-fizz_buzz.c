#include <stdio.h>

/**
 *main-prints the numbers from 1 to 100, followed by a new line.
 *But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz.
 *
 *Return: Always 0.
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 != 0)
				printf("Fizz ");
			else
				printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i % 3 != 0)
				printf("Buzz ");
			else
				printf("FizzBuzz ");
		}

		else
			printf("%d ", i);
	}

	printf("\n");

	return (0);
}
