#include "main.h"

/**
 * function that swaps the values of two integers.
 * Return: Always 0
 **/

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
