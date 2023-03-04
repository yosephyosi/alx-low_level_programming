#include <stdio.h>

/**
 * main - print single digit numbers
 * Return: 0 if the code successed
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
