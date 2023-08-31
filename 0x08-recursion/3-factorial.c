#include "main.h"

/**
 * factorial - The prototype.
 * @n: represent the number,
 * Return: -1 if n is 0, 1 if n is 1, and the factorial if n is greater than 1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
