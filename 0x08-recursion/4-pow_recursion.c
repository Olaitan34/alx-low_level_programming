#include "main.h"

/**
 * _pow_recursion - function to print the recurssion of the exponential
 * @x: The base number.
 * @y: The exponential.
 *Return: either -1, 1 or the exponetial result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x* _pow_recursion(x, y - 1));
}
