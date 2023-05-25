#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
*/

int main(void)
{
	int ch = 0;

	while (ch <= 57)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
		++ch;
	}
	putchar('\n);
	return (0);
}
