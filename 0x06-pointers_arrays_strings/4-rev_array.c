#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @o: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int o, i, tmp;

	i = n - 1;

	for (o = 0; i < n / 2; o++)
	{
		tmp = a[o];
		a[o] = a[i];
		a[i--] = tmp;
	}
}


	

