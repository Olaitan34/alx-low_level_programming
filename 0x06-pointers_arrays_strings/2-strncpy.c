#include "main.h"

/**
 * _strnncpy: to copy string,
 * @i: the declared integer
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i < n)
	{	
		dest[i] = src[i];
		i++;
	}	
	return 0;
}
