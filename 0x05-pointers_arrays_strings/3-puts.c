#include "main.h"

/**
 * _Puts: To print strings.
 *
 * @n: number of characters in string.
 *
 * Return: string
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
