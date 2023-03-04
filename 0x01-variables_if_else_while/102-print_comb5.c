#include <stdio.h>

/**
 * main - print four digit separated by space
 * Return: 0 if the code successed
 */

int main(void)
{
	int a;

	int b;

	int c;

	int d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = c + 1; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != 57 || b != 56 || c != 57 || d != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
