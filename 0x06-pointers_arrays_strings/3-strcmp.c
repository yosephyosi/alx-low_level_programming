#include "main.h"
/**
 * _strcmp - comaprision
 * @s1: first string
 * @s2: second string
 * Return: +ve , -ve or 0
*/

int _strcmp(char *s1, char *s2)
{
	int index  = 0;
	int tempIndex1 = 0;
	int tempIndex2 = 0;
	int s1Len = 0;
	int s2Len = 0;
	int a = 0;
	char *b = "";
	int value = 0;

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

	while (b[index] != '\0' && index <= (a - 1))
	{
		if (s1[index] > s2[index])
		{
			value = s1[index] - s2[index];

			return (value);
		} else if (s1[index] < s2[index])
		{
			value = s1[index] - s2[index];

			return (value);
		}
		index++;
	}
	return (0);
}
