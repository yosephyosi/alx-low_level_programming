#include <stdio.h>

/**
 * main - print alphabets
 * Return: always 0
 */

int main(void)
{
	char character;

	for (character = "a"; character <= "z"; character++)
	{
		putchar(character);
	}

	return (0);
}
