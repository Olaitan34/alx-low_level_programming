#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - To print a string,
 * @s: The string to be printed.
 * Return: 0.
 */
void _puts_recursion(char *s)
{
	if (strlen(s) > 0)
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
