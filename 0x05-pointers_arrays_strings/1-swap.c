#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of 2 int
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
