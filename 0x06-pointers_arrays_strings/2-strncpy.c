#include "main.h"
/**
 * _strncpy - entry point
 * @dest: destination of charachter
 * @src: source of charachter
 * @n: char length
 * Return: destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}		
