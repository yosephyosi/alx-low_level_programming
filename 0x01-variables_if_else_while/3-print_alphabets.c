#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
*/

int main(void)
{
	char lw = 'a';
	char up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
		++lw;
	}

	while (up <= 'Z')
	{
		putchar(up);
		++up;
	}
	putchar('\n');

	return (0);
}
