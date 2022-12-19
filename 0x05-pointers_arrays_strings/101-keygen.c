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

	pass = 0;

	while (pass <= 2645)
	{
		passwd = (passwd % 128);
		pass += passwd;
		printf("%c", passwd);
	}

	printf("%c", 2772 - pass);

	return (0);
}
