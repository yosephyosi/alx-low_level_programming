#include "main.h"

/**
 * print_alphabet - Entry point
*/

void print_alphabet_x10(void)
{
        int ch = 97;
	int counter = 1;	

       	while (ch <= 122)
       	{
		while (counter <= 10)
		{
               		_putchar(ch);
               		ch++;
		}
        	_putchar('\n');
		counter++;
	}
}
        
