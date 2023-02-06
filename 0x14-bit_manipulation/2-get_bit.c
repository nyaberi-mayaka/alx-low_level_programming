#include "main.h"

/**
 * get_bit - finds the value of a bit at a given index.
 * @n: the numbert
 * @index: the index starting from 0 of the bit you want to get.
 *
 * Return: Return the value of the bit at index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	char str[256];


	i = 0;
	if  (n == 0)
		str[i++] = 48;
	while (n)
	{
		str[i] = n % 2;
		n /= 2, i++;
	}
	str[i] = '\0';
	i--;

	if (index > i)
		return (-1);
	rev_string(str);

	return (str[index]);
}

/**
 * rev_string - reverses a string.
 *
 *@s: passed character pointer.
 * Return: void -nothing.
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

/**
 * _strlen -returns the length of a string.
 *@s: pointer parameter.
 *Return: nothing - void.
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	for (; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
