#include "main.h"

/**
 * print_numbers - Entry point
 */

void print_numbers(void)
{
	int num = 48;
	int tester = 1;

	while (tester)
	{
		_putchar(num);
		if (num == 57)
		{
			tester = 0;
		}
		num++;
	}
	_putchar('\n');
}
