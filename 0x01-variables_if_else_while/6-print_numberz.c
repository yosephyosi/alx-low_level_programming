#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
*/

int main(void)
{
        int num;

        num = 48;
        while (num <= 57)
        {
                putchar(num);
                ++num;
        }
        putchar('\n');
        return (0);
}

