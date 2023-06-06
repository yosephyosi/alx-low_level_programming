#include "main.h"
/**
 *
 *
 *
*/

char *cap_string(char *s)
{
	int a = 0;
	int b = 0;
	char lists[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[a] != '\0')
	{
		while (s[a] == lists[b])
		{
			s[a] = s[a] - 32;
			b++;
		}
		a++;
	}
	return (s);
}
