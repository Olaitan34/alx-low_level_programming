#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned long int bitmask;

	if(index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	bitmask == 1ul << index;

	if ((n & bitmask) == bitmask)
	{
		return 1;
	}
	else
	{
		return 0;
	}



}
