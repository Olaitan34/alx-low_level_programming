#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Function to convert to binary
 * @b: pointer of character
 * Return: Return he value of rtn
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rtn = 0;
	if (b == NULL)
	{
		return 0;
	}
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return 0;
		}
		rtn = (rtn * 2) + (*b - '0');
	}
	return rtn;
}
