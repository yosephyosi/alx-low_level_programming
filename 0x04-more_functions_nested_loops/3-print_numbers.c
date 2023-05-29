#include "main.h"

/**
 * 
 *
 */

void print_numbers(void)
{
	int num = 0;
	bool tester = true;
	
	while (tester)
	{
		_putchar(num);
		_putchar('/n');
		if (num == 10)
			break;
	}
}
