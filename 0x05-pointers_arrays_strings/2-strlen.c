#include "main.h"
/**
 *_strlen - entry point
 *@s: string input
 *Return: counter value
*/

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
