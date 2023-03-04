#include <stdio.h>

/**
 * main - print two digit number
 * Return: 0 if the code successed
 */

int main(void)
{
	int a;

	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
