#include "main.h"

/**
 * print_alphabet_x10 - Entry point
*/

void print_alphabet_x10(void)
{
	int ch = 97;
	int counter = 1;	

	while (counter <= 10)
	{
		while (ch <= 122)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		ch = 97;
		counter++;
	}
}
        
