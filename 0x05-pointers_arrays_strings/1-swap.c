#include "main.h"

/**
 * Swaps_int - swaps the values of two integers,
 * @a: first_number The first integer
 * @b: second_number The second integer.
 */	

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
