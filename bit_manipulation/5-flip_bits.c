#include "main.h"

/**
 * flip_bits - return the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int xor_result;

	xor_result = n ^ m;

	if (n >= sizeof(unsigned long int) * 8 || m >= sizeof(unsigned long int) * 8)
		return (-1);
		
	while (xor_result != 0)
	{
		count += (xor_result & 1);
		xor_result = xor_result >> 1;
	}

	return (count);
}
