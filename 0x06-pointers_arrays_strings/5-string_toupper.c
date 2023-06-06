#include "main.h"
/**
 * string_toupper - make char to upper case
 * @c: input string
 * Return: uppercase chars
*/

char *string_toupper(char *c)
{
	int sizeOfC = 0;	
	int counter = 0;

	while (c[counter] != '\0')
	{
		if (c[counter] < 91)
		{
			c[counter] = c[counter] - 32;
		}
		counter++;
	}
	return (c);
}
