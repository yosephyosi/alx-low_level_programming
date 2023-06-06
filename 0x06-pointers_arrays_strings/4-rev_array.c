#include "main.h"
/**
 * reverse_array - reverse array of int
 * @a: list of numbers to be reversed
 * @n: size of list/arrys (length)
*/

void reverse_array(int *a, int n)
{
	int counter = 0;
	int bigNum = n - 1;
	int temp;

	while (counter < n/2)
	{
		temp = a[bigNum];
		a[bigNum] = a[counter];
		a[counter] = temp;
		counter++;
	}
}
