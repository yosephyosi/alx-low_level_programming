#include "main.h"

/**
 * _islower - return 1 if its lower
 * Return: 0
 */

int _islower(int c)
{
	if (c < 97 && c > 122)
	{
		return (0);
	}else
	{
		return (1);
	}
}
