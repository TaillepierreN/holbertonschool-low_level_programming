#include "main.h"

/**
 * flip_bits - return the number of bits needed to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*unsigned int i;*/
	unsigned int xor_result;

	xor_result = n ^ m;

	printf("xor is %u\n", xor_result);
	printf("binary is %u\n", (xor_result & 1));
	return(xor_result);
}