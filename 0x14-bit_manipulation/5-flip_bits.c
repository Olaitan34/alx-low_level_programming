#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flipper = 0;

	while (xor_result)
	{
		if (xor_result & 1)
			flipper++;
		xor_result >>= 1;
	}
	return (flipper);
}
