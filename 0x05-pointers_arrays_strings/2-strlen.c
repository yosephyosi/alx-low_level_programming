#include "main.h"
/**
 *_strlen - entry point
 *@s: string input
 *Return: counter value
*/

int _strlen(char *s)
{
	int a[] = *s;
	int counter = 0;

	while (a[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
