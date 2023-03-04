#include <stdio.h>

/**
 * main - print two digit number
 * Return: 0 if the code successed
 */

int main(void)
{
	int a;

	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
		}
	}
	
	return (0);
}
