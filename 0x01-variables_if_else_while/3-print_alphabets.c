#include <stdio.h>

/**
 * main - prints alphabets with both cases
 * Return: always 0 if successed
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	
	putchar("\n");
	return (0);
}
