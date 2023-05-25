#include "main.h"

/**
 * print_alphabet - Entry point
*/

void print_alphabet_x10(void)
{
        char ch = 'a';
	while (1 <= 10)
	{
        	while (ch <= 'z')
        	{
                	_putchar(ch);
                	ch++;
        	}
        	_putchar('\n');
	}
	_putchar('\n');
}
        
