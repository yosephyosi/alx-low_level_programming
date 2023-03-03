#include <stdio.h>

/**
 * main - 
 * Return: always 0 if the code sucessed
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' ||  alphabet != 'q')
		{
			putchar(alphabet);
		}
	}
	return (0);
}
