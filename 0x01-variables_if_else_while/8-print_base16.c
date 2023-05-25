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
		while (digit <= '9')
			putchar(digit);
			++digit;

		letter = 'a';
		while (letter <= 'f')
			putchar(letter);

		putchar('\n');

	return (0);
}
