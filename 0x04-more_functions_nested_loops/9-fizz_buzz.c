#include <stdio.h>

/**
 *main - entry point
 *Return: always 0
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}else if ((num % 3) == 0)
		{
			printf("Fizz");
		}else if ((num % 5) == 0)
		{
			printf("Buzz");
		}else
		{
			printf("%d", num);
		}
		num++;
		if (num != 100)
			printf(" ");
	}
	return (0);
}
