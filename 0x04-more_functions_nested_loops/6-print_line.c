#include "main.h"

/**
 * print_line - entry point
 * @n: input for num
*/

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
