#include "main.h"
/**
 * binary_to_unit - Function to convert to binary
 * @b: Pointer to the string
 * Return: return 'rtn
 *
 * '
 */

unsigned int binary_to_uint(const char *b)
{
	
	unsigned int rtn = 0;

	if(b == NULL)
	{
		return 0;
	}
	while(*b != '\0')
	{
		if(*b != '0' && *b != '1')
		{
			return 0;
		}
		rtn = (rtn << 1) + (*b - '0');
		b++;
	}
	return rtn;
}
