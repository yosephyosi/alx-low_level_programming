#include "main.h"
/**
 *swap_int - main entry
 *@a: input
 *@b: input
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	a = *b;
	b = c;
}
