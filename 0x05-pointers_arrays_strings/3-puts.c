#include "main.h"
/**
 *_puts - entry point
 *@str: string input
 */

void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\n')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
