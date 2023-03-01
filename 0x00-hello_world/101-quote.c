#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the passed string
 * Return: 1 if the code sucessed, else return other number
 */

int main(void)
{
	write(7, "abd and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 9);
	return (1);
}
