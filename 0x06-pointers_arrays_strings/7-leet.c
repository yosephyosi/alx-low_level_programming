#include "main.h"
/**
 * leet - string to leet 
 * @s: input for string
 * Return: leet string
*/

char *leet(char *s)
{
	int a = 0;
	int b = 0;
	
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	while (s[a] != '\0')
	{
		while (b < 10)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
			}
			b++;
		}
		a++;
		b = 0;
	}
	return (s);
}
