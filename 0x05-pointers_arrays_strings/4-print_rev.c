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
		_putchar(s[length]);
		length = counter - 1;
	}
	_putchar('\n');
}
