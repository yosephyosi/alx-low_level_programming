#include "main.h"
/**
 * cap_string - Capitalize chars
 * @s: input for chars
 * Return: Capitalized string
*/

char *cap_string(char *s)
{
	int a = 0;
	int b = 0;
	char lists[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

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
