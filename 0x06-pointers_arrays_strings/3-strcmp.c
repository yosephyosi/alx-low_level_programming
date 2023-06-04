#include "main.h"
/**
 * _strcmp - comaprision of two strings
 * @s1: first string
 * @s2: second string
 * Return: +ve , -ve or 0
*/
int _strcmp(char *s1, char *s2)
{
	int inde = 0, tempIndex1 = 0, tempIndex2 = 0;
	int a = 0, s1Len = 0, s2Len = 0, value = 0;
	char *b = "";

	while (s1[tempIndex1] != '\0')
	{
		s1Len++;
		tempIndex1++;
	}
	while (s2[tempIndex2] != '\0')
	{
		s2Len++;
		tempIndex2++;
	}
	if (s1Len > s2Len)
	{
		a = s1Len;
		b = s1;
	} else
	{
		a = s2Len;
		b = s2;
	}
	while (b[inde] != '\0' && inde <= (a - 1))
	{
		if (s1[inde] > s2[inde])
		{
			value = s1[inde] - s2[inde];
			return (value);
		} else if (s1[inde] < s2[inde])
		{
			value = s1[inde] - s2[inde];
			return (value);
		}
		inde++;
	}
	return (0);
}
