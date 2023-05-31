#include "main.h"
/**
 *print_rev - entry point
 *@s: string input
*/

void print_rev(char *s)
{
	int length = 0;
	int counter = 0;	

	while (s[counter] != '\0')
	{
		length++;
	}

	while (s[counter] != '\0')
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
