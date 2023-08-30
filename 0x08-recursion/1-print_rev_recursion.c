#include "main.h"

/**
 * _print_rev_recursion - to print the reverse string,
 * @s: The symbol of the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	return;
        }
	_putchar(*s - 1);
}

