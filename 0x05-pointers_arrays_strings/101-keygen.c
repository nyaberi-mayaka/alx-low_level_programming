#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - generates random password.
 *Return: zero.
 */

int main(void)
{
	int passwd, pass;

	srand(time(NULL));

	passwd = rand();

	if (passwd >= 1)
		pass = (passwd % 1000) * 50;
	printf("%c", pass);

	return (0);
}
