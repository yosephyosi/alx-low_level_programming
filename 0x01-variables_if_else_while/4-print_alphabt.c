#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: always 0
*/

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z' && alpha != 'q' && alpha != 'e')
	{
		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}
