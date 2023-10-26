#include "main.h"

/**
 * print_binary - Function to print binary representation of number
 * @n: integer 
 * Return: 
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int i;
	unsigned long int mask;

	for(i >= 0; i = (bits - 1) ;i--)
	{
		mask = 1 << i;
		if (n && mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");

}
