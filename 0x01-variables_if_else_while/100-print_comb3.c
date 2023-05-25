#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
*/

int main(void)
{
        int a = 48;
        int b = 49;

        while (a < 57)
        {
                while (b <= 57)
                {
                        putchar(a);
                        putchar(b);
                        putchar(',');
                        putchar(' ');
                        b++;
                }
                a++;
                b = a +1;
        }
        return (0);
}
