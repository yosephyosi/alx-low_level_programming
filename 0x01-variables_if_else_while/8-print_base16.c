#include <stdio.h>

/**
 * main - print hexadecimal charachters
 * Return: 0 is the code sucessed
 */

int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (c = 61; c <= 66; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
