#include "main.h"

/**
 * print_square - entry point
 * @size: size input
 */

void print_square(int size)
{
	int counter = 0;
	int a = size;

	while (counter < size)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		while (a > 0)
		{
			_putchar('#');
			a--;
		}
		counter++;
		_putchar('\n');
		a = size;
	}
}
