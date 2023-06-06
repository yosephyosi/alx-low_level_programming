#include "main.h"
/**
 * cap_string - Capitalize chars
 * @s: input for chars
 * Return: Capitalized string
*/

char *cap_string(char *s)
{
	int a = 1;
	int b = 0;
	char lists[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	while (s[a] != '\0')
	{
		while (b < 13)
		{
			if (s[a] == lists[b])
			{
				if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
					s[a + 1] = s[a + 1] - 32;
			}
		b++;
		}
	a++;
	b = 0;
	}
	return (s);
}
