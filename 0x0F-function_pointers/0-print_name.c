#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to the string @name.
 * @f: function pointer taking a @string pointer and returning type void.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
