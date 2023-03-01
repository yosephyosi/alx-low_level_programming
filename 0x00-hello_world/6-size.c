#include <stdio.h>

/**
 * main - prints datatype size depend on cpu stracture
 * Return: 0 if code sucessed, else returns other number
 */

int main(void)
{
        puts("Size of an char: %d byte(s)", sizeof(char));
        puts("Size of an int: %d byte(s)", sizeof(int));
        puts("Size of an long int: %d byte(s)", sizeof(long int));
        puts("Size of an long long int: %d byte(s)", sizeof(long long int));
        puts("Size of an float: %d byte(s)", sizeof(float));
        return (0);
}

