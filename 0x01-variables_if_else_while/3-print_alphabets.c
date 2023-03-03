#include <stdio.h>

/**
 * main - prints alphabets with both cases
 * Return: always 0 if successed
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	return (0);
}
