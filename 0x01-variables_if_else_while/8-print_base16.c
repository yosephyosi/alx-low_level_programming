#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char digit, letter;

	digit = '0';
	letter = 'a';
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
