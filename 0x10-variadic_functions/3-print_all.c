#include "variadic_functions.h"

void switch_case(const char *const format, int i, va_list);

/**
 * print_all - prints everything.
 * @format: constant pointer to a constant variable.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list types;

	va_start(types, format);

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch_case(format, i, types);

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
		     format[i] == 'f') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(types);
}


/**
 * switch_case - prints the various types of arguments using switch case.
 * @format: constant pointer to address of const type of variable.
 * @i: The position of the address pointed to from the base address.
 * @types: The varible argument list passed as an argument.
 *
 * Return: void.
 */

void switch_case(const char *const format, int i, va_list types)
{
	char *str;

	switch (format[i])
	{
	case 'c':
		printf("%c", (char) va_arg(types, int));
		break;
	case 'f':
		printf("%f", (float) va_arg(types, double));
		break;
	case 'i':
		printf("%d", va_arg(types, int));
		break;
	case 's':
		str = va_arg(types, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		break;
	}
}
