#include "main.h"
/**
 * string_toupper - make char to upper case
 * @c: input string
 * Return: uppercase chars
*/

char *string_toupper(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		if (s[counter] <= 'z' && s[counter] >= 'a')
			s[counter] = s[counter] - 32;
		counter++;
	}
	return (s);
}
