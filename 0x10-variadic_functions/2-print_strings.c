#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str;
	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < (n - 1))
		{
			if (separator == NULL)
				continue;

			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strs);
}
