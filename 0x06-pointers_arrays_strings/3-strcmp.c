#include "main.h"
/**
 * _strcmp - compare and return + , - or 0
 * @s1: first string
 * @s2: second string
 * Return: cmparision value
*/

int _strcmp(char *s1, char *s2)
{
	int index  = 0;
	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	int a = 0;
	char *b = "";
	int value = 0;

	if (s1Len > s2Len)
	{
		a = s1Len;
		b = s1;
	}else
	{
		a = s2Len;
		b = s2;
	}

	while (b[index] != '\0' && index <= (a - 1))
	{
		if (s1[index] > s2[index])
		{
			value = s1[index] - s2[index];
			return (value);
		}else if (s1[index] < s2[index])
		{
			int value = s1[index] - s2[index];
			return (value);
		}
		index++;
	}
	return (0);
}
