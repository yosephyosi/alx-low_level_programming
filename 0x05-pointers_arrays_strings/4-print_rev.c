#include "main.h"
/**
 *print_rev - entry point
 *@s: string input
*/

void print_rev(char *s)
{
	int length;
	int counter = 0;	

	while (s[counter] != '\0')
	{
		counter++;
	}

	while (s[counter] != '\0')
	{
		length = counter - 1;
		_putchar(s[length]);
	}
	_putchar('\n');
}
