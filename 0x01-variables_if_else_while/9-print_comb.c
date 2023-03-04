#include <stdio.h>

/**
 * main - single digit numbers separated with comma
 * Return: 0 is the code successed
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
