#include "main.h"

/**
 * main - Main function
 * Return: 0
 */

int main(void)
{
	char a[8] = "_putchar";
	
	int b;

	for (b = 0; b <= 7; b++)
	{
		_putchar(a[b]);
	}
	_putchar('\n');

	return (0);
}
