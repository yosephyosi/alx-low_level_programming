#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - compare and print the generated number with 0
 * Return: 0 if the program successed else other number
 * /
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive");
	}else if (n == 0)
	{
		printf("is zero");
	}else
	{
		printf("is negative");

	return (0);
}
