#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sums a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to sum.
 *
 * Return: The sum of the integers, or 0 if no integers are provided.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
