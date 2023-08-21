#include "main.h"

/**
 * Swaps the values of two integers.
 * first_number The first integer.
 * second_number The second integer.
 */	

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
