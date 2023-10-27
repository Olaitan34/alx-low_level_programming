#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function that will return value
 * @n: unsigned long intger
 * @index: unsigned integer
 * Return: return 1 at success and 0 when failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return -1;
	}
	bitmask = 1ul << index;
	if ((n & bitmask) == bitmask)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
