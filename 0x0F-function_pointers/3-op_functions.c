#include "3-calc.h"

/**
 * op_add - calculates the sum of @a and @b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the diffrence btn @a and @b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: difference between  @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of @a and @b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient between dividend  @a and divisor @b.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: quotient  @a and @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division.
 * @a: first operand.
 * @b: second operand.
 *
 * Return: remainder between the division of @a and @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
