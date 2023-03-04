#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 * Return: 0 is the code successed
 */

int main (void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
