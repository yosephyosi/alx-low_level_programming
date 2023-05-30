#include "main.h"

/**
 *
 *
 *
*/

void print_square(int size)
{
	int counter = 0;
	int a = size;

	while (counter > 0)
	{
		while (a > 0)
		{
			_putchar('#');
			a--;
		}
		counter--;
		_putchar('\n');
		a = size;
	}
	_putchar('\n');
}
