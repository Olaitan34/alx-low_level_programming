#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Function the print the string.
 * @s: the string.
 * strlen: length of the string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
