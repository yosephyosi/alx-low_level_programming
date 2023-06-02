#include "main.h"
/**
 *_strcat - entry point
 * @dest: destination input
 * @src: source input
 * Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
