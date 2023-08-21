#include "main.h"

/**
 * Swaps_int - swaps the values of two integers,
 * @a: The first integer integer to swap
 * @b: 	The second integer to swap.
 */	

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
