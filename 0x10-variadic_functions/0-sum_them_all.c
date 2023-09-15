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
        unsigned int result = 0;
	unsigned int i = 0;

        va_list arg;
        va_start(arg, n);

        for (i = 0; i < n; i++)
        {
                result += va_arg(arg, unsigned int);
        }
        va_end(arg);

        return (n > 0) ? result : 0; /* Return result if n > 0, otherwise return 0 */
}

